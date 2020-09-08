#include<iostream>
#include<set>

int main(){
    int ar[]={1,2,7,14,15,22,26,29};

    std::set<int> s(ar,ar+8);

    if(s.count(26)==1)
        std::cout<<"26 exists in the set.";
    else
        std::cout<<"26 doesn't exist in the set.";

    if(s.count(30)==1)
        std::cout<<"\n30 exists in the set.";
    else
        std::cout<<"\n30 doesn't exist in the set.";

    return 0;
}
