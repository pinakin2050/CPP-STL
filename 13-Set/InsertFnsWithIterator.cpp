#include<iostream>
#include<set>

int main(){
    std::set<int> s;
    auto itr=s.insert(s.begin(),1);
    itr=s.insert(itr,4);
    itr=s.insert(itr,10);
    itr=s.insert(itr,2);
    itr=s.insert(itr,1);

    std::cout<<"Elements are: ";
    for(auto i:s)
        std::cout<<i<<" ";

    return 0;
}
