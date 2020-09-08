#include<iostream>

template<typename T,typename U>
class C
{
    T x;
    U y;
public:
    C(){ std::cout<<"Constructor called"<<std::endl; }
};
int main(){
    C<int,char> o1;
    C<double,bool> o2;
    C<char,char> o3;
    return 0;
}
