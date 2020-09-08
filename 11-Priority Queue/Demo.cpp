#include<iostream>
#include<queue>

void getPriority_queue(std::priority_queue<int> pq){
    while(!pq.empty())
    {
        std::cout<<pq.top()<<" ";
        pq.pop();
    }
}
int main(){
    std::priority_queue<int> pq;

    pq.push(10);
    pq.push(30);
    pq.push(5);
    pq.push(50);
    pq.push(20);
    pq.push(40);

    std::cout<<"Priority Queue elements: "; // By default C++ creates a max-heap for priority queue
    getPriority_queue(pq);

    return 0;
}
