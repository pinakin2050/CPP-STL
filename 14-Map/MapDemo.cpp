#include<iostream>
#include<map>

int main(){
    std::map<int,int> m;

    m.insert({1,10});
    m.insert({5,50});
    m.insert({3,30});
    m.insert({4,40});
    m.insert({2,20});
    m.insert({5,50}); // It won't get inserted in the map
    m.insert({6,50});

    std::cout<<"Elements of map:\nKey\tValue\n";
    for(auto i=m.begin();i!=m.end();i++)
        std::cout<<i->first<<"\t"<<i->second<<"\n";

    return 0;
}
