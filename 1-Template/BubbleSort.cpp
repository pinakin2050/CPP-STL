#include<iostream>

template <typename T>

void bubbleSort(T a[],int n){
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(a[j]<a[j-1])
                std::swap(a[j],a[j-1]);
        }
    }
}

int main(){
    int ar[]={90,56,32,55,67,23};
    int n=sizeof(ar)/sizeof(ar[0]);

    std::cout<<"Default Array: ";
    for(int i=0;i<n;i++)
        std::cout<<ar[i]<<" ";
    std::cout<<std::endl;

    bubbleSort(ar,n);

    std::cout<<"Sorted Array: ";
    for(int i=0;i<n;i++)
        std::cout<<ar[i]<<" ";
    return 0;
}
