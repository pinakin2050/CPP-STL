#include<iostream>
#include<deque>

void getDeque(const std::deque<int> dq){
    for(auto i=dq.begin();i!=dq.end();i++)
        std::cout<<*i<<" ";
}
int main(){
    std::deque<int> dq;

    for(int i=1;i<10;i++)
        dq.push_back(i);

    std::cout<<"Deque elements before assign(): ";
    getDeque(dq);

    dq.assign(5,10);

    std::cout<<std::endl<<"Deque elements after assign(5,10): ";
    getDeque(dq);

    return 0;
}
