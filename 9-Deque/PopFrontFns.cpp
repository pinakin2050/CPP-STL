#include<iostream>
#include<deque>

void getDeque(const std::deque<int> &dq){
    for(auto i:dq)
        std::cout<<i<<" ";
}

int main(){
    std::deque<int> dq{1,2,3,4,5,6,7};
    std::cout<<"Deque before pop_front(): ";
    getDeque(dq);

    dq.pop_front();
    std::cout<<"\nDeque after dq.pop_front(): ";
    getDeque(dq);

    return 0;
}
