#include<iostream>
#include<list>

void getList(const std::list<int> &list1){
    for(auto i=list1.begin();i!=list1.end();i++)
        std::cout<<*i<<" ";
}

bool even(const int &e){
    return ((e%2)==0);
}

int main(){
    std::list<int> list1;

    for(int i=1;i<=7;i++)
        list1.push_back(i);

    std::cout<<"List elements before remove_if(): ";
    getList(list1);

    list1.remove_if(even);

    std::cout<<"\nList elements after list1.remove_if(even): ";
    getList(list1);

    return 0;
}
