#include<iostream>
template <typename T=int,typename U=char>
class A
{
    T x;
    U y;
public:
    A(){
    std::cout<<"Constructor called."<<std::endl;
    std::cout<<sizeof(T)<<" "<<sizeof(U)<<std::endl;
    }
};

int main(){
    A<> a;
    A<double,int> b;
    A<char> c;
    return 0;
}
