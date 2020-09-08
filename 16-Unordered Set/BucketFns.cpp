#include<iostream>
#include<unordered_set>

int main(){
    std::unordered_set<int> us1{1,2,3,5,8,13};
    std::unordered_set<std::string> us2{"Glitty","Aishani","Hade","Aroma","Esha"};

    std::cout<<"******* Bucket Values for Integer Set ********"<<std::endl;
    std::cout<<"Element\tBucket"<<std::endl;
    for(const auto i:us1)
        std::cout<<i<<"\t"<<us1.bucket(i)<<std::endl;

    std::cout<<"******* Bucket Values for String Set ********"<<std::endl;
    std::cout<<"Element\tBucket"<<std::endl;
    for(const auto i:us2)
        std::cout<<i<<"\t"<<us2.bucket(i)<<std::endl;

    return 0;
}
