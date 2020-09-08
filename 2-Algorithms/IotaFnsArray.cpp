#include<iostream>
#include<algorithm>

void display(int ar[],int s){
    for(int i=0;i<s;i++)
        std::cout<<ar[i]<<" ";
    std::cout<<std::endl;
}
int main(){

    int ar[6]={0};
    std::cout<<"Array before iota():";
    display(ar,6);
    std::iota(ar,ar+6,3);
    std::cout<<"Array after iota():";
    display(ar,6);
    return 0;
}
