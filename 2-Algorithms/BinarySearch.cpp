#include<iostream>
#include<algorithm>

void displayArray(int a[],int aSize){
    for(int i=0;i<aSize;i++)
        std::cout<<a[i]<<" ";
}

int main(){
    int ar[]={1,67,94,23,6,33,74,73,7,31,4,5};
    int aSize=sizeof(ar)/sizeof(ar[0]);
    std::cout<<"Array is:";
    displayArray(ar,aSize);

    std::sort(ar,ar+aSize);

    if(std::binary_search(ar,ar+aSize,6))
        std::cout<<"\nElement found!"<<std::endl;
    else
        std::cout<<"Element not found!"<<std::endl;
    return 0;
}
