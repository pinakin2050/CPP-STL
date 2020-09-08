#include<iostream>
#include<list>

void getList(const std::list<int> &list1){
    for(auto i=list1.begin();i!=list1.end();i++)
        std::cout<<*i<<" ";
}

int main(){
    std::list<int> list1;

    for(int i=1;i<=7;i++)
        list1.push_back(i);

    std::cout<<"List elements before resize(): ";
    getList(list1);

    list1.resize(10);

    std::cout<<"\nList elements after list1.resize(10): ";
    getList(list1);

    list1.resize(5);

    std::cout<<"\nList elements after list1.resize(5): ";
    getList(list1);

    list1.resize(12,7);

    std::cout<<"\nList elements after list1.resize(12,7): ";
    getList(list1);

    list1.resize(3,7);

    std::cout<<"\nList elements after list1.resize(3,7): ";
    getList(list1);

    return 0;
}
