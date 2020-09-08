#include<iostream>
#include<list>

void getList(const std::list<int> &list1){
    for(auto i=list1.begin();i!=list1.end();i++)
        std::cout<<*i<<" ";
}
int main(){
    std::list<int> list1;

    for(int i=1;i<=10;i++)
        list1.push_back(i);

    std::cout<<"List elements before push_front(): ";
    getList(list1);

    list1.push_front(0);

    std::cout<<"\nList elements after list1.push_front(0): ";
    getList(list1);

    return 0;
}
