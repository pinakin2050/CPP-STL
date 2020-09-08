#include<iostream>
#include<forward_list>

void getList(const std::forward_list<int> &fl){
    for(auto i:fl)
        std::cout<<i<<" ";
}

int main(){
    std::forward_list<int> fl1{1,2,3,4};
    std::forward_list<int> fl2{9,10,11};
    std::cout<<"List elements before insert_after: ";
    getList(fl1);

    std::forward_list<int>::iterator it1=fl1.begin();
    advance(it1,1);
    it1=fl1.insert_after(it1,{5,6,7});

    std::cout<<"\nList elements after fl1.insert_after(it1,{5,6,7}): ";
    getList(fl1);

    it1=fl1.insert_after(it1,2,8);

    std::cout<<"\nList elements after fl1.insert_after(it1,2,8): ";
    getList(fl1);

    it1=fl1.insert_after(it1,fl2.begin(),fl2.end());
    std::cout<<"\nList elements after fl1.insert_after(it1,fl2.begin(),fl2.end()): ";
    getList(fl1);

    it1=fl1.insert_after(it1,12);
    std::cout<<"\nList elements after fl1.insert_after(it1,12): ";
    getList(fl1);

    return 0;
}
