#include<iostream>
#include<forward_list>

void getList(const std::forward_list<int> &l){
    for(auto i=l.begin();i!=l.end();i++)
        std::cout<<*i<<" ";
}
int main(){
    std::forward_list<int> l1{1,2,3,4};
    std::forward_list<int> l2{5,6};

    std::cout<<"Elements of list1 before swap(): ";
    getList(l1);
    std::cout<<"\n\nElements of list2 before swap(): ";
    getList(l2);

    l1.swap(l2);

    std::cout<<"\n\nElements of list1 after swap(): ";
    getList(l1);
    std::cout<<"\n\nElements of list2 after swap(): ";
    getList(l2);

    return 0;
}
