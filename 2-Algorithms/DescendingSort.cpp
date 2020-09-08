#include<iostream>
#include<algorithm>

int main(){
    int ar[]={7,4,6,8,2,4,2,3,9,0,1,5};
    int s=sizeof(ar)/sizeof(ar[0]);
    std::sort(ar,ar+s,std::greater<int>());
    std::cout<<"Array after sorting:"<<std::endl;
    for(int i=0;i<s;i++)
        std::cout<<ar[i]<<" ";
    return 0;
}
