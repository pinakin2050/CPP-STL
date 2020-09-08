#include<iostream>
#include<vector>

template<typename T>
void displayVector(std::vector<T> v){
    for(auto i=v.begin();i!=v.end();i++)
        std::cout<<*i<<" ";
}
int main(){

    std::vector<int> v;

    for(int i=1;i<10;i++)
        v.push_back(i);

    std::cout<<"Size of V before resizing: "<<v.size()<<std::endl;
    std::cout<<"elements of v before resizing: ";
    displayVector(v);

    v.resize(6);

    std::cout<<std::endl<<"Size of V after resizing: "<<v.size()<<std::endl;
    std::cout<<"elements of v after resizing: ";
    displayVector(v);

    v.resize(10);

    std::cout<<std::endl<<"Size of V after resizing again: "<<v.size()<<std::endl;
    std::cout<<"elements of v after resizing again: ";
    displayVector(v);

    return 0;
}
