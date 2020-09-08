#include<iostream>
#include<forward_list>

void getList(const std::forward_list<int> &fl){
    for(auto i:fl)
        std::cout<<i<<" ";
}

int main(){
    std::forward_list<int> fl{1,2,3,4,5,6,7,8,9};
    std::cout<<"List before erase_after: ";
    getList(fl);

    auto itS=fl.begin();
    auto itE=itS;

    advance(itS,3);
    itS=fl.erase_after(itS);

    std::cout<<"\nList after fl.erase_after(it): ";
    getList(fl);

    advance(itE,7);
    fl.erase_after(itS,itE);
    std::cout<<"\nList after fl.erase_after(itS,itE): ";
    getList(fl);


    return 0;
}
