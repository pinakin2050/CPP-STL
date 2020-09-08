#include<iostream>
#include<forward_list>

void getList(const std::forward_list<int> &fl){
    for(auto i:fl)
        std::cout<<i<<" ";
}

int main(){
    std::forward_list<int> fl1{1,2,3,4};

    std::cout<<"List elements before emplace_after: ";
    getList(fl1);

    std::forward_list<int>::iterator it1=fl1.before_begin();

    it1=fl1.emplace_after(it1,7);
    std::cout<<"\nList elements after fl1.emplace_after(it1,7): ";
    getList(fl1);

    return 0;
}
