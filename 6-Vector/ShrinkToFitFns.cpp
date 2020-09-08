#include<iostream>
#include<vector>

int main(){
    std::vector<int> v;

    for(int i=1;i<10;i++)
        v.push_back(i);

    std::cout<<"Size of vector before shrinking:"<<v.size()<<std::endl;
    std::cout<<"Capacity of vector before shrinking:"<<v.capacity()<<std::endl;

    v.shrink_to_fit();

    std::cout<<std::endl<<"Size of vector before shrinking:"<<v.size()<<std::endl;
    std::cout<<"Capacity of vector before shrinking:"<<v.capacity()<<std::endl;
    return 0;
}
