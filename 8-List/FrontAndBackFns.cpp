#include<iostream>
#include<list>

int main(){
    std::list<int> list1;

    for(int i=1;i<=10;i++)
        list1.push_back(i);

    std::cout<<"Element at front is : "<<list1.front();
    std::cout<<"\nElement at back is : "<<list1.back();

    return 0;
}
