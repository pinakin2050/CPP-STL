#include<iostream>
#include<array>

int main(){
    std::array<int,7> ar{1,2,3,4,5,6,7};

    std::cout<<"First Element of the array: "<<ar.front()<<std::endl;
    std::cout<<"Last Element of the array: "<<ar.back();

    return 0;
}
