#include<iostream>
#include<unordered_set>

int main(){
    std::unordered_multiset<int> ums;
    ums.insert(4);
    ums.insert(2);
    ums.insert(5);
    ums.insert(6);
    ums.insert(9);
    ums.insert(4);
    ums.insert(3);
    ums.insert(9);

    std::cout<<"Container elements: ";
    for(const auto i:ums)
        std::cout<<i<<" ";
    return 0;
}
