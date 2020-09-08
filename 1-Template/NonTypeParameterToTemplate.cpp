#include<iostream>

template<typename T,int max>
int arrMin(T ar[],int size){
    int min=max;
    for(int i=0;i<size;i++)
        if(min>ar[i])
            min=ar[i];
    return min;
}

int main(){
    int ar1[]={9,6,3,1,67};
    int n1=sizeof(ar1)/sizeof(ar1[0]);
    char ar2[]={1,2,0};
    int n2=sizeof(ar2)/sizeof(ar2[0]);
    std::cout<<arrMin<int,10000>(ar1,n1)<<std::endl;
    std::cout<<arrMin<char,9000>(ar2,n2)<<std::endl;
    return 0;
}
