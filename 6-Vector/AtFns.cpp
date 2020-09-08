#include<iostream>
#include<vector>

int main(){
    std::vector<int> v;

    for(int i=1;i<10;i++)
        v.push_back(i);

    std::cout<<"Vector elements: ";
    for(int i=0;i<v.size();i++)
        std::cout<<v.at(i)<<" ";

    return 0;
}
