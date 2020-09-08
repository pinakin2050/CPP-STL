#include<iostream>
template<typename T>
void fun(T a){
    std::cout<<"The main template fns."<<std::endl;
}

template<>
void fun(int i){
    std::cout<<"The special template fns for int type."<<std::endl;
}

int main(){
    fun<char>('A');
    fun<int>(10);
    fun<double>(22.7);
    return 0;
}
