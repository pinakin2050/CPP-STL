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

    std::cout<<"List before clear():";
    getList(l);

    l.clear();
    std::cout<<"\n\nList after l.clear():";
    getList(l);

    return 0;
}
