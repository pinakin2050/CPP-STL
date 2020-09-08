#include<iostream>
#include<array>

int main(){
    std::array<int,0> ar;
    ar.empty() ? std::cout<<"Array is empty" : std::cout<<"Array is not empty";
    return 0;
}
