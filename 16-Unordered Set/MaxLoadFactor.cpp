#include<iostream>
#include<unordered_set>

void getSetInfo(const std::unordered_set<int> &us){
    std::cout<<"\nThe size of Set:"<<us.size()<<std::endl;
    std::cout<<"The total bucket count:"<<us.bucket_count()<<std::endl;
    std::cout<<"The load factor:"<<us.load_factor()<<std::endl;
    std::cout<<"The max load factor:"<<us.max_load_factor()<<std::endl;

}

int main(){
    std::unordered_set<int> us{1,2,3,4,5,6};

    std::cout<<"Values before setting max_load_factor :";
    getSetInfo(us);

    us.max_load_factor(0.8);

    std::cout<<"\nValues after setting max_load_factor :";
    getSetInfo(us);

    return 0;
}
