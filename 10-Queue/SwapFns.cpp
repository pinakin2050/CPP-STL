#include<iostream>
#include<queue>

void getQueue(std::queue<int> q){
    while(!q.empty())
    {
        std::cout<<q.front()<<" ";
        q.pop();
    }
}

int main(){
    std::queue<int> q1;
    std::queue<int> q2;

    for(int i=1;i<=3;i++)
        q1.push(i);

    for(int i=4;i<=9;i++)
        q2.push(i);


    std::cout<<"Queue 1 elements before swapping: ";
    getQueue(q1);

    std::cout<<"\nQueue 2 elements before swapping: ";
    getQueue(q2);

    q1.swap(q2);

    std::cout<<"\n\nQueue 1 elements after swapping: ";
    getQueue(q1);

    std::cout<<"\nQueue 2 elements after swapping: ";
    getQueue(q2);



    return 0;
}
