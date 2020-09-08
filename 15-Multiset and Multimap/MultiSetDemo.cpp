#include<iostream>
#include<set>

int main(){
    std::multiset<int> ms;

    ms.insert(6);
    ms.insert(2);
    ms.insert(4);
    ms.insert(5);
    ms.insert(1);
    ms.insert(4); // 4 will get inserted in the multiset unlike set

    std::cout<<"Elements of multiset: ";
    for(auto i:ms)
        std::cout<<i<<" ";

    return 0;
}
