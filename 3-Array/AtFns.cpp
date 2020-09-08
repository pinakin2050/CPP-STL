#include<iostream>
#include<array>

int main(){
    std::array<int,7> ar{1,2,3,4,5,6,7};

    std::cout<<"Array Elements: ";
    for(int i=0;i<7;i++)
        std::cout<<ar.at(i)<<" ";

    return 0;
}
