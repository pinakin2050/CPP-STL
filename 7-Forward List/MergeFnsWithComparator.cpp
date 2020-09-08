#include<iostream>
#include<forward_list>

void getList(const std::forward_list<int> &l){
    for(auto i=l.begin();i!=l.end();i++)
        std::cout<<*i<<" ";
}

bool compare(int first,int second){
    return first<second;
}
int main(){
    std::forward_list<int> l1{19,2,13,40,98};
    std::forward_list<int> l2{55,26};

    std::cout<<"Elements of list1 before Merge(): ";
    getList(l1);
    std::cout<<"\nElements of list2 before Merge(): ";
    getList(l2);

    l1.sort();
    l2.sort();
    l1.merge(l2,compare);

    std::cout<<"\n\nElements of list1 after l1.merge(l2): ";
    getList(l1);
    std::cout<<"\n\nElements of list2 after l1.merge(l2): ";
    getList(l2);

    return 0;
}
