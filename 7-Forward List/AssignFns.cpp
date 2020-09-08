#include<iostream>
#include<forward_list>
void getList(const std::forward_list<int> &fl){
    for(auto i:fl)
        std::cout<<i<<" ";
}

int main(){
    std::forward_list<int> fl1;
    std::forward_list<int> fl2;

    fl1.assign({1,2,3,4});
    fl2.assign(6,7);

    std::cout<<"Element of forward list 1: ";
    getList(fl1);
    std::cout<<"\nElement of forward list 2: ";
    getList(fl2);

    return 0;
}
