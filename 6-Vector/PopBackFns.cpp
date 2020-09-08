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

    std::cout<<"Vector elements before pop_back(): ";
    displayVector(v);

    v.pop_back();

    std::cout<<std::endl<<"Vector elements after pop_back(): ";
    displayVector(v);
    return 0;
}
