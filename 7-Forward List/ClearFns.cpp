#include<iostream>
#include<forward_list>

void getList(const std::forward_list<int> &fl){
    for(auto i:fl)
        std::cout<<i<<" ";
}

int main(){
    std::forward_list<int> fl1{1,2,3,4};

    std::cout<<"List elements before clear(): ";
    getList(fl1);

    fl1.clear();

    std::cout<<"\nList elements after clear(): ";
    getList(fl1);

    return 0;
}
