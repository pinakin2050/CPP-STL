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

    auto it = m.upper_bound(3);
    std::cout<<"Upper bound of key 3 is ("<<it->first<<","<<it->second<<")\n";
    it=m.upper_bound(8);
    std::cout<<"Upper bound of key 8 is ("<<it->first<<","<<it->second<<")\n";
    it=m.upper_bound(11);
    std::cout<<"Upper bound of key 11 is ("<<it->first<<","<<it->second<<")\n";

    return 0;
}
