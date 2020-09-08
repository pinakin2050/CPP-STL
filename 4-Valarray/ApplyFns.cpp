#include<iostream>
#include<valarray>
int main(){
    std::valarray<int> vr1={1,2,3,4,5,6};
    std::valarray<int> vr2;
    vr2=vr1.apply([](int x){return x+7;});

    std::cout<<"Elements of vr1:"<<std::endl;
    for(int &x:vr1)
        std::cout<<x<<" ";

    std::cout<<std::endl<<"Elements of vr2:"<<std::endl;
    for(int &x:vr2)
        std::cout<<x<<" ";
    return 0;
}
