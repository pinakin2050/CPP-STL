#include<iostream>
#include<forward_list>

void getList(const std::forward_list<char> &fl){
    for(auto i:fl)
        std::cout<<i<<" ";
}
int main(){
    std::forward_list<char> fl1{'P','i','n','a','k','i','n'};
    std::forward_list<char> fl2{'A','i','s','h','a','n','i'};

    std::cout<<"List 1 before splice_after(): ";
    getList(fl1);
    std::cout<<"\nList 2 before splice_after(): ";
    getList(fl2);

    auto it=fl1.begin();
    advance(it,2);
    fl1.splice_after(it,fl2,fl2.before_begin(),fl2.end());

    std::cout<<"\nList 1 after fl1.splice_after(it,fl2,fl2.before_begin(),fl2.end()): ";
    getList(fl1);

    return 0;
}
