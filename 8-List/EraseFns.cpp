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

    std::cout<<"List elements before erase():";
    getList(list1);

    std::list<int>::iterator it=list1.begin();
    advance(it,3);
    list1.erase(it);

    std::cout<<"\nList elements after list1.erase(it):";
    getList(list1);

    it=list1.begin();
    advance(it,3);
    list1.erase(list1.begin(),it);

    std::cout<<"\nList elements after list1.erase(list1.begin(),it):";
    getList(list1);

    return 0;
}
