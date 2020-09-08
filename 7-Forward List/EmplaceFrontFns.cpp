#include<iostream>
#include<forward_list>

int main(){
    std::forward_list<int> fl;
    fl.emplace_front(10);
    fl.emplace_front(20);
    fl.emplace_front(30);
    fl.emplace_front(40);

    std::cout<<"Forward list elements: ";
    for(auto i:fl)
        std::cout<<i<<" ";

    return 0;
}
