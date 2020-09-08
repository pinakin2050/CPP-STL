#include<iostream>
#include<map>

void getMap(const std::map<int,int> &m){
    std::cout<<"Key\tValue\n";
    for(auto i=m.begin();i!=m.end();i++)
        std::cout<<i->first<<"\t"<<i->second<<"\n";
}
int main(){
    std::map<int,int> m1,m2;

    for(int i=1;i<=7;i++)
        m1.insert({i,i*10});
    std::cout<<"Elements of m1:\n";
    getMap(m1);

    auto itr1=m1.begin();
    advance(itr1,3);
    auto itr2=m1.end();
    itr2--;
    itr2--;

    m2.insert(itr1,itr2);

    std::cout<<"Elements of m2:\n";
    getMap(m2);

    return 0;
}
