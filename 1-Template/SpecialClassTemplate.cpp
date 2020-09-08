#include<iostream>
template<typename T>
class A
{
public:
    A(){
        std::cout<<"General Class."<<std::endl;
    }
};
template<>
class A <int>
{
    public:
    A(){
        std::cout<<"Special Class for int type."<<std::endl;
    }
};

int main(){
    A<float> f;
    A<double> d;
    A<char> c;
    A<int> i;
    A<bool> b;
    return 0;
}
