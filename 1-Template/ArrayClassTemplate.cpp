#include<iostream>

template<typename T>
class Array
{
    T *ptr;
    int size;
public:
    Array(T ar[],int s);
    void print();
};

template<typename T>
Array<T>::Array(T ar[],int s){
    ptr=new T[s];
    size=s;
    for(int i=0;i<size;i++)
        ptr[i]=ar[i];
}

template<typename T>
void Array<T>::print(){
    for(int i=0;i<size;i++)
        std::cout<<*ptr++<<" ";
    std::cout<<std::endl;
}

int main(){
    int ar[]={1,2,3,4,5,6,7};
    int s=sizeof(ar)/sizeof(ar[0]);
    Array<int> a(ar,s);
    a.print();
    char c[]={'A','I','S','H','A','N','I'};
    s=sizeof(c)/sizeof(c[0]);
    Array<char> b(c,s);
    b.print();
    return 0;
}
