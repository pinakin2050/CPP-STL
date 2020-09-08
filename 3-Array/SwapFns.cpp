#include<iostream>
#include<array>

int main(){
    std::array<int,7> ar1{1,2,3,4,5,6,7};
    std::array<int,7> ar2{8,9,10,11,12,13,14};

    std::cout<<"elements of Array 1 before swapping: ";
    for(auto i:ar1)
        std::cout<<i<<" ";

    std::cout<<"\nelements of Array 2 before swapping: ";
    for(auto i:ar2)
        std::cout<<i<<" ";

    ar1.swap(ar2); //can only swap array of same size.

    std::cout<<"\n\nelements of Array 1 after swapping: ";
    for(auto i:ar1)
        std::cout<<i<<" ";

    std::cout<<"\nelements of Array 2 after swapping: ";
    for(auto i:ar2)
        std::cout<<i<<" ";

    return 0;
}
