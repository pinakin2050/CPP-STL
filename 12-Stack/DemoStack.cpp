#include<iostream>
#include<stack>

void getStack(std::stack<int> s){
    while(!s.empty())
    {
        std::cout<<s.top()<<" ";
        s.pop();
    }
}
int main(){
    std::stack<int> s;

    for(int i=1;i<=10;i++)
        s.push(i);

    std::cout<<"Size of the stack: "<<s.size();
    std::cout<<"\nStack elements: ";
    getStack(s);

    return 0;
}
