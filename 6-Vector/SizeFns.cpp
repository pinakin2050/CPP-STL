#include<iostream>
#include<vector>

int main(){

    std::vector<char> v;
    for(int i=1;i<10;i++)
        v.push_back(i);
    std::cout<<"Size of V: "<<v.size();
    return 0;
}
