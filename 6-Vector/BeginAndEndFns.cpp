#include<iostream>
#include<vector>

int main(){
    std::vector<int> v1;
    for(int i=1;i<8;i++)
        v1.push_back(i);
    std::cout<<"Vector elements: "<<std::endl;
    for(auto i=v1.begin();i!=v1.end();i++)
        std::cout<<*i<<" ";
    return 0;
}
