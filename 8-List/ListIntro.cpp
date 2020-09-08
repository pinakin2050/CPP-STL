#include<iostream>
#include<list>

int main(){
    std::list<int> list1;

    for(int i=1;i<=10;i++)
        list1.push_back(i);

    std::cout<<"List elements: ";
    for(auto i=list1.begin();i!=list1.end();i++)
        std::cout<<*i<<" ";

    return 0;
}
