#include<iostream>
#include<deque>

void getDeque(const std::deque<int> &dq){
    for(auto i:dq)
        std::cout<<i<<" ";
}

int main(){
    std::deque<int> dq{1,2,3,4,5,6,7};
    std::cout<<"Deque before push_front(): ";
    getDeque(dq);

    dq.push_front(0);
    std::cout<<"\nDeque after dq.push_front(0): ";
    getDeque(dq);

    return 0;
}
