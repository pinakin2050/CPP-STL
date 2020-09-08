#include<iostream>
#include<map>

int main(){
    std::map<int,int> m;

    m.insert({2,20});
    m.insert({1,10});

    auto itr=m.find(2);
    itr=m.insert(itr,{3,30});
    itr=m.insert(itr,{4,40});

    std::cout<<"Elements of map:\nKey\tValue\n";
    for(auto i=m.begin();i!=m.end();i++)
        std::cout<<i->first<<"\t"<<i->second<<"\n";

    return 0;
}
