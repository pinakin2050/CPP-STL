#include<iostream>
#include<list>

void getList(const std::list<int> &l){
    for(auto i=l.begin();i!=l.end();i++)
        std::cout<<*i<<" ";
}

int main(){
    std::list<int> l1;
    auto it=l1.emplace(l1.begin(),7);
    l1.emplace(it,8);

    std::cout<<"Elements of list1: ";
    getList(l1);

    std::list<std::pair<int,char>> lis;
    auto it1= lis.emplace(lis.begin(),7,'a');
    lis.emplace(it1,7,'p');

    std::cout<<"\n";
    for(auto x:lis)
        std::cout<<"("<<x.first<<","<<x.second<<") ";

    return 0;
}
