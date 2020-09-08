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
    std::queue<int> q;

    for(int i=1;i<=6;i++)
        q.emplace(i);

    std::cout<<"Queue elements: ";
    getQueue(q);

    return 0;
}
