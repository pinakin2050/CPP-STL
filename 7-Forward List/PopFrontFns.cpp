#include<iostream>
#include<forward_list>

void getList(const std::forward_list<int> &fl){
    for(auto i:fl)
        std::cout<<i<<" ";
}

int main(){
    std::forward_list<int> fl{1,2,3,4,5};

    std::cout<<"Forward list elements before pop_front(): ";
    getList(fl);

    fl.pop_front();

    std::cout<<"\nForward list elements after fl.pop_front(): ";
    getList(fl);

    return 0;
}
