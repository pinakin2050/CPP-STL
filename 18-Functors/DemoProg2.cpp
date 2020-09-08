#include<iostream>
#include<algorithm>

class Increment
{
private:
    int num;
public:
    Increment(int n=0):num(n){}

    int operator()(int ar_element=0)const{
        return num+ar_element;
    }

};
int main(){
    int ar[]={1,2,3,4,5,6,7};
    int s=sizeof(ar)/sizeof(ar[0]);
    int num=5;

    std::cout<<"Array Elements before incrementing:\n";
    for(const auto i:ar)
        std::cout<<i<<" ";

    std::transform(ar,ar+s,ar,Increment(num));

    std::cout<<"\nArray Elements after incrementing:\n";
    for(const auto i:ar)
        std::cout<<i<<" ";

    return 0;
}
