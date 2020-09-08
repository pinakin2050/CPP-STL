#include<iostream>
#include<map>

int main(){
    std::map<int,int> m;

    auto itr= m.emplace_hint(m.begin(),1,10);
    itr=m.emplace_hint(itr,2,20);
    itr=m.emplace_hint(itr,3,30);
    itr=m.emplace_hint(itr,4,40);

    std::cout<<"Map Elements:\nKey\tValue\n";
    for(auto i=m.begin();i!=m.end();i++)
        std::cout<<i->first<<"\t"<<i->second<<std::endl;

    return 0;
}
