#include<iostream>
#include<list>

void getList(const std::list<int> &l){
    for(auto i=l.begin();i!=l.end();i++)
        std::cout<<*i<<" ";
}
int main(){
    std::list<int> l1{1,2,3,4};
    std::list<int> l2{5,6};

    std::cout<<"Elements of list1: ";
    getList(l1);
    std::cout<<"\n\nElements of list2: ";
    getList(l2);

    l1=l2;

    std::cout<<"\n\nElements of list1 after l1=l2: ";
    getList(l1);

    return 0;
}
