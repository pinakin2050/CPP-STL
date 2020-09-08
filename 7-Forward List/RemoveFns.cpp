#include<iostream>
#include<forward_list>

void getList(const std::forward_list<int> &list1){
    for(auto i=list1.begin();i!=list1.end();i++)
        std::cout<<*i<<" ";
}
int main(){

    std::forward_list<int> list1;

    list1.push_front(10);
    list1.push_front(20);
    list1.push_front(20);
    list1.push_front(30);
    list1.push_front(40);
    list1.push_front(50);

    std::cout<<"List elements before remove():";
    getList(list1);

    list1.remove(20); //removes all the elements matching with 20

    std::cout<<"\nList elements after list1.remove(20): ";
    getList(list1);

    return 0;
}
