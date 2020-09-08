#include<iostream>
#include<deque>
#include<vector>

void getDeque(const std::deque<int> &d){
    for(auto i:d)
        std::cout<<i<<" ";
}

int main(){
    std::deque<int> dq{1,2,3,4,5,6,7};
    std::cout<<"Deque before insert fns: ";
    getDeque(dq);

    std::deque<int>::iterator it=dq.begin();
    advance(it,2);
    dq.insert(it,8);
    it=dq.begin();
    std::cout<<"\nDeque after dq.insert(it,8): ";
    getDeque(dq);

    advance(it,4);
    dq.insert(it,3,7);
    it=dq.begin();
    std::cout<<"\nDeque after dq.insert(it,3,7): ";
    getDeque(dq);

    std::vector<int> v{8,9,10};
    advance(it,8);
    dq.insert(it,v.begin(),v.end());
    std::cout<<"\nDeque after dq.insert(it,v.begin(),v.end()): ";
    getDeque(dq);


    return 0;
}
