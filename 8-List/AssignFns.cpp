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

    std::cout<<"List elements before assign():";
    getList(list1);

    std::list<int> list2;
    list2.assign(list1.begin(),list1.end());
    std::cout<<"\nElements of list2 created using assign(): ";
    getList(list2);

    list1.assign(7,7);

    std::cout<<"\nList elements after list1.assign(7,7): ";
    getList(list1);

    return 0;
}
