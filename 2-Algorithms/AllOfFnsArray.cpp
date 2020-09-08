#include<iostream>
#include<algorithm>
int main(){
    int ar[]={1,4,2,3,4,-6};
    int s=sizeof(ar)/sizeof(ar[0]);
    std::all_of(ar,ar+s,[](int x){return x>0;})?
    std::cout<<"All elements are positive.":
    std::cout<<"All elements are not positive.";
    return 0;
}
