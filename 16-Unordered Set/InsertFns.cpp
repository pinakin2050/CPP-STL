#include<iostream>
#include<unordered_set>

int main(){
    std::unordered_set<std::string> us{"First","Second"};
    std::string s="Third";

    us.insert(s);

    std::cout<<"Elements are: ";
    for(const auto i:us)
        std::cout<<i<<" ";
    return 0;
}
