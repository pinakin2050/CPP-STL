#include<iostream>
#include<deque>

template<typename T>
void displayDeque(std::deque<T> dq){
    for(auto i=dq.begin();i!=dq.end();i++)
        std::cout<<*i<<" ";
}
int main(){

    std::deque<int> dq;

    for(int i=1;i<10;i++)
        dq.push_back(i);

    std::cout<<"Size of dq before resizing: "<<dq.size()<<std::endl;
    std::cout<<"elements of dq before resizing: ";
    displayDeque(dq);

    dq.resize(6);

    std::cout<<std::endl<<"Size of dq after resizing: "<<dq.size()<<std::endl;
    std::cout<<"elements of dq after resizing: ";
    displayDeque(dq);

    dq.resize(10);

    std::cout<<std::endl<<"Size of dq after resizing again: "<<dq.size()<<std::endl;
    std::cout<<"elements of dq after resizing again: ";
    displayDeque(dq);

    return 0;
}
