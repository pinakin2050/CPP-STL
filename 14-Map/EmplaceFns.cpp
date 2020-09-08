#include<iostream>
#include<map>

int main(){
    std::map<int,int> m;

    m.emplace(4,40);
    m.emplace(1,10);
    m.emplace(3,30);
    m.emplace(2,20);

    std::cout<<"Map Elements:\nKey\tValue\n";
    for(auto i=m.begin();i!=m.end();i++)
        std::cout<<i->first<<"\t"<<i->second<<"\n";

    return 0;
}
