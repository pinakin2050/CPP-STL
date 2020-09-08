#include<iostream>
#include<array>

int main(){
    std::array<int,7> ar{1,2,3,4,5,6,7};

    std::cout<<"The max size of the array: "<<ar.max_size()<<std::endl;

    return 0;
}
