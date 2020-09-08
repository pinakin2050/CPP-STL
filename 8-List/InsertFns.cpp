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

    std::cout<<"List elements before insert(): ";
    getList(list1);

    std::list<int>::iterator it=list1.begin(); //Initializing iterator to use with insert fns
    advance(it,4); //making iterator to point to 5th position
    list1.insert(it,5);

    std::cout<<"\nList elements after list1.insert(it,5): ";
    getList(list1);

    it=list1.begin();
    advance(it,7);
    list1.insert(it,2,7); // inserting 2 elements at 8th position

    std::cout<<"\nList elements after list1.insert(it,2,7): ";
    getList(list1);

    return 0;
}
