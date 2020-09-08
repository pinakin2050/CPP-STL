#include<iostream>
#include<map>

int main(){
    std::map<int,int> m;

    m.insert({1,10});
    m.insert({3,30});
    m.insert({5,50});
    m.insert({7,70});
    m.insert({9,90});
    m.insert({11,110});

    std::cout<<"Map Elements:\nKey\tValue\n";
    for(auto i=m.begin();i!=m.end();i++)
        std::cout<<i->first<<"\t"<<i->second<<std::endl;

    auto it = m.lower_bound(3);
    std::cout<<"Lower bound of key 3 is ("<<it->first<<","<<it->second<<")\n";
    it=m.lower_bound(8);
    std::cout<<"Lower bound of key 8 is ("<<it->first<<","<<it->second<<")\n";
    it=m.lower_bound(13);
    std::cout<<"Lower bound of key 13 is ("<<it->first<<","<<it->second<<")\n";

    return 0;
}
