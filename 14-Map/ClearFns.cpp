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

    std::cout<<"Map size before clear(): "<<m.size()<<std::endl;
    m.clear();
    std::cout<<"Map size after clear(): "<<m.size()<<std::endl;

    return 0;
}
