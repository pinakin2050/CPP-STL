#include<iostream>
#include<valarray>
int main(){
    std::valarray<int> vr1={1,2,3,4,5,6,7};
    std::cout<<"Elements of vr1:"<<std::endl;
    for(int &x:vr1)
        std::cout<<x<<" ";
    std::cout<<std::endl<<"Largest Element:"<<vr1.max();
    return 0;
}
