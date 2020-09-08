#include<iostream>
#include<set>

void getSet(const std::set<int> &s){
    for(auto i:s)
        std::cout<<i<<" ";
}

int main(){
    std::set<int> s;

    for(int i=1;i<10;i++)
        s.insert(i);

    std::cout<<"Elements of set before erase(): ";
    getSet(s);

    std::set<int>::iterator itr=s.begin();
    itr++;
    itr++;
    s.erase(itr);

    std::cout<<"\n\nElements of set after s.erase(itr): ";
    getSet(s);

    return 0;
}
