#include<iostream>
#include<algorithm>
int main(){
    int ar[]={1,4,2,3,4,-6};
    int s=sizeof(ar)/sizeof(ar[0]);
    std::none_of(ar,ar+s,[](int x){return x>0;})?
    std::cout<<"There's no negative element.":
    std::cout<<"There are negative elements.";
    return 0;
}
