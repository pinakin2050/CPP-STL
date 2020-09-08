#include<iostream>
#include<deque>

int main(){
    std::deque<int> dq{1,2,3,4};

    std::cout<<"Deque element: ";
    for(auto i:dq)
        std::cout<<i<<" ";
    return 0;
}
