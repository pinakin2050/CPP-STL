#include<iostream>
#include<unordered_set>

int main(){
    std::unordered_set<std::string> us;

    bool res=us.key_eq()("a","A");
    std::cout<<"us.key_eq() is ";
    if(res==1)
        std::cout<<"Case insensitive.";
    else
        std::cout<<"Case sensitive.";

    return 0;
}
