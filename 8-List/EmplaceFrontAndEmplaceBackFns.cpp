#include<iostream>
#include<list>

void getList(const std::list<int> &l){
    for(auto i=l.begin();i!=l.end();i++)
        std::cout<<*i<<" ";
}
int main(){
    std::list<int> l;

    for(int i=1;i<10;i++)
        l.push_back(i);

    std::cout<<"List before emplace_front():";
    getList(l);

    l.emplace_front(7);
    std::cout<<"\n\nList after l.emplace_front(7):";
    getList(l);

    l.emplace_back(9);
    std::cout<<"\n\nList after l.emplace_back(9):";
    getList(l);

    return 0;
}
