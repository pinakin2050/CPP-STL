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

    std::cout<<"List elements before reverse(): ";
    getList(list1);

    list1.reverse();

    std::cout<<"\nList elements after list1.reverse(): ";
    getList(list1);

    return 0;
}
