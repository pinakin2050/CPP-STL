#include<iostream>
#include<forward_list>

int main(){
    std::forward_list<int> fl;
    fl.push_front(10);
    fl.push_front(20);
    fl.push_front(30);
    fl.push_front(40);

    std::cout<<"Forward list elements: ";
    for(auto i:fl)
        std::cout<<i<<" ";

    return 0;
}
