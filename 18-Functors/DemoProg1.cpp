#include<iostream>
#include<algorithm>

int increment(int x){   return x+1;    } //Increments ar elements by 1

int main(){
    int ar[]={1,2,3,4,5,6};
    int s=sizeof(ar)/sizeof(ar[0]);

    std::cout<<"Array Elements before incrementing:\t";
    for(const auto i:ar)
        std::cout<<i<<" ";

    std::transform(ar,ar+s,ar,increment);

    std::cout<<"\nArray Elements after incrementing:\t";
    for(const auto i:ar)
        std::cout<<i<<" ";

    return 0;
}
