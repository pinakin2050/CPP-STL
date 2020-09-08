#include<iostream>
#include<vector>

void displayVector(std::vector<int> &v){
    for(auto i=v.begin();i!=v.end();i++)
        std::cout<<*i<<" ";
}
int main(){
    std::vector<int> v;

    for(int i=1;i<10;i++)
        v.push_back(i);

    std::cout<<"Vector elements before emplace(): "<<std::endl;
    displayVector(v);

    v.emplace_back(12);

    std::cout<<"\nVector elements after emplace(): "<<std::endl;
    displayVector(v);

    return 0;
}
