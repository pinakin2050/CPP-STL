#include<iostream>
#include<list>

void setList(std::list<int> &l){
    int s,e;
    std::cout<<"Please enter list size:";
    std::cin>>s;

    for(int i=0;i<s;i++)
    {
        std::cout<<"Enter element: ";
        std::cin>>e;
        l.push_back(e);
    }
}

void getList(const std::list<int> &list1){
    for(auto i=list1.begin();i!=list1.end();i++)
        std::cout<<*i<<" ";
}

int main(){
    std::list<int> list1;

    setList(list1);

    std::cout<<"List elements before sort(): ";
    getList(list1);

    list1.sort();

    std::cout<<"\nList elements after list1.sort(): ";
    getList(list1);

    return 0;
}
