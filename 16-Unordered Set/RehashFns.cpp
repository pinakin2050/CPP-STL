#include<iostream>
#include<unordered_set>

void getSetInfo(const std::unordered_set<int> &us){
    std::cout<<"\nThe size of Set:"<<us.size()<<std::endl;
    std::cout<<"The total bucket count:"<<us.bucket_count()<<std::endl;
    std::cout<<"The load factor:"<<us.load_factor()<<std::endl;
}

int main(){
    std::unordered_set<int> us{1,2,3,4,5,6};

    std::cout<<"Values before rehashing:";
    getSetInfo(us);

    us.rehash(30);

    std::cout<<"\nValues after rehashing:";
    getSetInfo(us);

    return 0;
}
