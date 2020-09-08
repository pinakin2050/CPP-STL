#include<iostream>
#include<set>

void getSet(const std::set<int> &s){
    for(auto i:s)
        std::cout<<i<<" ";
}

int main(){
    std::set<int> s1;

    for(int i=1;i<10;i++)
        s1.insert(i);

    std::cout<<"Elements of set 1: ";
    getSet(s1);


    std::set<int> s2;
    s2.insert(s1.find(4),s1.end());

    std::cout<<"\n\nElements of set 2: ";
    getSet(s2);

    return 0;
}
