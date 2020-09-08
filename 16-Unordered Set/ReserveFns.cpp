#include<iostream>
#include<unordered_set>

int main(){
    std::unordered_set<int> us1{1,2,3,5,8,13};
    std::unordered_set<std::string> us2{"Glitty","Aishani","Hade","Aroma","Esha"};

    us1.reserve(3);
    us2.reserve(2);

    std::cout<<"Elements of Integer Set:";
    for(const auto i:us1)
        std::cout<<i<<" ";

    std::cout<<"\nElements of String Set:";
    for(const auto i:us2)
        std::cout<<i<<" ";

    return 0;
}
