#include<iostream>
#include<vector>

int main(){
    std::vector<int> v;
    for(int i=1;i<8;i++)
        v.push_back(i);
    for(auto i=v.cbegin();i!=v.cend();i++)
        std::cout<<*i<<" ";
    return 0;
}
