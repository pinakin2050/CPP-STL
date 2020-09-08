#include<iostream>
#include<array>

int main(){
    std::array<int,6> ar{1,2,3,4,5,6};

    std::cout<<"Array elements:";
    for(auto i:ar)
        std::cout<<i<<" ";

    return 0;
}
