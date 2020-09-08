#include<iostream>
#include<queue>

int main(){
    std::queue<int> q;

    q.empty() ? std::cout<<"Is queue empty? - Yes" : std::cout<<"Is queue empty? - No";

    for(int i=1;i<10;i++)
        q.push(i);

    q.empty() ? std::cout<<"\nIs queue empty now? - Yes" : std::cout<<"\nIs queue empty now? - No";

    return 0;
}
