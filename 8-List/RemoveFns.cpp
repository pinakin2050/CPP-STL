#include<iostream>
#include<list>

void getList(const std::list<int> &list1){
    for(auto i=list1.begin();i!=list1.end();i++)
        std::cout<<*i<<" ";
}
int main(){

    std::list<int> list1;

    list1.push_back(10);
    list1.push_back(20);
    list1.push_back(20);
    list1.push_back(30);
    list1.push_back(40);
    list1.push_back(50);

    std::cout<<"List elements before remove():";
    getList(list1);

    list1.remove(20); //removes all the elements matching with 20

    std::cout<<"\nList elements after list1.remove(20): ";
    getList(list1);

    return 0;
}
