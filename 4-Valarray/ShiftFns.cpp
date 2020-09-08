#include<iostream>
#include<valarray>
void display(std::valarray<int> &v){
    for(int x:v)
        std::cout<<x<<" ";
}
int main(){
    std::valarray<int> vr={1,2,3,4,5};
    std::cout<<"Elements of vr: ";
    display(vr);

    std::valarray<int> leftVr= vr.shift(2);
    std::cout<<std::endl<<"Elements after left shifting: ";
    display(leftVr);

    std::valarray<int> rightVr=vr.shift(-2);
    std::cout<<std::endl<<"Elements after right shifting: ";
    display(rightVr);
    return 0;
}
