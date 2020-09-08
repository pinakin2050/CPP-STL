#include<iostream>
#include<list>

void getList(const std::list<int> &l){
    for(auto x:l)
        std::cout<<x<<" ";
}

int main(){
    std::list<int> l1{1,2,3,4};
    std::list<int> l2{5,6,7};
    std::list<int> l3{8,9};

    std::cout<<"Before splice():";
    std::cout<<"\nElement of list1: ";
    getList(l1);
    std::cout<<"\nElement of list2: ";
    getList(l2);
    std::cout<<"\nElement of list3: ";
    getList(l3);

    l1.splice(l1.begin(),l3); // it will insert elements of l3 in the beginning of l1.
    std::cout<<"\n\nElement of list1 after l1.splice(l1.begin(),l3) : ";
    getList(l1);

    std::list<int>::iterator it1=l1.begin();
    std::list<int>::iterator it2=l2.begin();
    advance(it1,2);
    advance(it2,2);
    l2.splice(it2,l1,it1); // it will insert element of l1 which is at index 2 at the index 2 in l2
    std::cout<<"\n\nElement of list2 after l2.splice(it2,l1,it1) : ";
    getList(l2);

    std::list<int>::iterator it3=l3.begin();
    l3.splice(it3,l2,l2.begin(),it2);//it will insert elements from beginning of l2 to index 2 in l3.
    std::cout<<"\n\nElement of list3 after l3.splice(it3,l2,l2.begin(),l2.end()): ";
    getList(l3);

    return 0;
}
