#include<iostream>
#include<array>

int main(){
    std::array<int,7> ar;

    ar.fill(7);

    std::cout<<"Array elements: ";
    for(auto i:ar)
        std::cout<<i<<" ";
    return 0;
}
