#include<iostream>
#include<valarray>

void view(std::valarray<int> &vr){
    for(int x:vr)
        std::cout<<x<<" ";
}
int main(){
    std::valarray<int> vr1={1,3};
    std::valarray<int> vr2={0,2,4,6,8};

    std::cout<<"Elements of vr1 before swapping:"<<std::endl;
    view(vr1);
    std::cout<<std::endl<<"Elements of vr2 before swapping:"<<std::endl;
    view(vr2);

    vr1.swap(vr2);

    std::cout<<std::endl<<"Elements of vr1 after swapping:"<<std::endl;
    view(vr1);
    std::cout<<std::endl<<"Elements of vr2 after swapping:"<<std::endl;
    view(vr2);
    return 0;
}
