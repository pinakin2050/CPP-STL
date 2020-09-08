#include<iostream>
#include<unordered_set>

int main(){
    std::unordered_set<int> us1{1,2,3,5,8,13};
    std::unordered_set<std::string> us2{"Glitty","Aishani","Hade","Aroma","Esha"};

    std::cout<<"Bucket Count of set 1:"<<us1.bucket_count()<<std::endl;
    std::cout<<"Bucket Count of set 2:"<<us2.bucket_count()<<std::endl;

    return 0;
}
