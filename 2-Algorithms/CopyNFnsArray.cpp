#include<iostream>
#include<algorithm>
int main(){
    int ar[]={1,22,3,4,5,6};
    int ar1[6];
    std::copy_n(ar,6,ar1);
    int s=sizeof(ar1)/sizeof(ar1[0]);
    std::cout<<"New array after copying:";
    for(int i=0;i<6;i++)
        std::cout<<ar1[i]<<" ";
    return 0;
}
