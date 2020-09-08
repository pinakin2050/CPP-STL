#include<iostream>
template <typename T>

T myMax(T x,T y){
    return (x>y)?x:y;
}

int main(){
    std::cout<<myMax<int>(7,4)<<std::endl;
    std::cout<<myMax<double>(7.4,9.4)<<std::endl;
    std::cout<<myMax<char>('A','S')<<std::endl;
    return 0;
}
