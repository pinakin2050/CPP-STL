#include<iostream>
#include<vector>

void displaVector(std::vector<int> v){
    for(auto i=v.begin();i!=v.end();i++)
        std::cout<<*i<<" ";
}
int main(){
    std::vector<int> v;

    for(int i=1;i<10;i++)
        v.push_back(i);

    std::cout<<"Vector elements before erase(): ";
    displaVector(v);

    v.erase(v.begin()+2);

    std::cout<<std::endl<<"Vector elements after v.erase(v.begin()+2): ";
    displaVector(v);

    v.erase(v.begin(),v.begin()+5);

    std::cout<<std::endl<<"Vector elements after v.erase(v.begin(),v.begin()+5): ";
    displaVector(v);

    return 0;
}
