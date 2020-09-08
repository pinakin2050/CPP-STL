#include<iostream>
#include<algorithm>
int main(){
    int ar[]={1,4,2,3,4,-6};
    int s=sizeof(ar)/sizeof(ar[0]);
    std::any_of(ar,ar+s,[](int x){return x<0;})?
    std::cout<<"There exists a negative number.":
    std::cout<<"All elements are positive.";
    return 0;
}
