#include<iostream>
#include<map>

int main(){
    std::multimap<int,int> m;

    m.insert({1,10});
    m.insert({2,50});
    m.insert({3,30});
    m.insert({3,40});
    m.insert({2,20});
    m.insert({1,60});

    std::cout<<"Elements of map:\nKey\tValue\n";
    for(auto i=m.begin();i!=m.end();i++)
        std::cout<<i->first<<"\t"<<i->second<<"\n";

    return 0;
}
