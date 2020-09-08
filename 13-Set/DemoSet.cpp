#include<iostream>
#include<set>

int main(){
    std::set<int> s;
    s.insert(5);
    s.insert(7);
    s.insert(4);
    s.insert(1);
    s.insert(10);
    s.insert(2);
    s.insert(3);
    s.insert(5); //Only one 5 will be added to set

    std::cout<<"Elements of set: ";
    for(auto i:s)
        std::cout<<i<<" ";

    return 0;
}
