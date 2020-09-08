#include<iostream>
#include<queue>

void getPriorityQueue(std::priority_queue<int,std::vector<int>,std::greater<int>> pq){
    while(!pq.empty())
    {
        std::cout<<pq.top()<<" ";
        pq.pop();
    }
}

int main()
{
    std::priority_queue<int,std::vector<int>,std::greater<int>> pq;

    pq.push(56);
    pq.push(2);
    pq.push(1);
    pq.push(20);
    pq.push(34);
    pq.push(23);
    pq.push(90);

    std::cout<<"Elements of priority queue: ";
    getPriorityQueue(pq);
    return 0;
}
