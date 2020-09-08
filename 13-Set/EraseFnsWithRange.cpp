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


    std::set<int>::iterator itr1=s.begin();
    std::set<int>::iterator itr2=s.end();
    itr1++;
    itr1++;
    itr2--;
    itr2--;

    s.erase(itr1,itr2);

    std::cout<<"\n\nElements of set after s.erase(itr,itr2): ";
    getSet(s);

    return 0;
}
