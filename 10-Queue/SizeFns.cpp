#include<iostream>
#include<queue>

int main(){
    std::queue<int> q;

    std::cout<<"Queue size before pushing elements: "<<q.size();

    for(int i=1;i<=6;i++)
        q.push(i);

    std::cout<<"\nQueue size after pushing elements: "<<q.size();

    return 0;
}
