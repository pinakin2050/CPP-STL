#include<iostream>
#include<array>
#include<unordered_set>

int main(){
    std::unordered_set<std::string> us{"Fourth","Fifth"};
    std::array<std::string,3> ar={"First","Second","Third"};

    us.insert(ar.begin(),ar.end());

    std::cout<<"Set elements: ";
    for(const auto i:us)
        std::cout<<i<<" ";

    return 0;
}
