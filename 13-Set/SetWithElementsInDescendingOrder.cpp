#include<iostream>
#include<set>

int main(){
    std::set< int,std::greater<int> > s;

    for(int i=1;i<11;i++)
        s.insert(i);

    std::cout<<"Elements of set: ";
    for(auto i:s)
        std::cout<<i<<" ";

    return 0;
}
