#include<iostream>
#include<vector>

int main(){

    std::vector<char> v;
    for(int i=1;i<10;i++)
        v.push_back(i);
    std::cout<<"Capacity of V : "<<v.capacity();
    return 0;
}
