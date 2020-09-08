#include<iostream>
#include<list>

int main(){
    std::list<int> l1;

    l1.empty() ? std::cout<<"List is empty." : std::cout<<"List is not empty.";

    return 0;
}
