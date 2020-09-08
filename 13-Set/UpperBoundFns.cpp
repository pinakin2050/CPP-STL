#include<iostream>
#include<set>

int main(){
    std::set<int> s{1,8,3,4,9,6,7,2};

    std::cout<<"Elements of set: ";
    for(auto i:s)
        std::cout<<i<<" ";

    std::cout<<"\nLower bound of 7 is "<<*(s.upper_bound(7));  // writing it as *() because this fns returns iterator.
    std::cout<<"\nLower bound of 5 is "<<*(s.upper_bound(5));
    std::cout<<"\nLower bound of 50 is "<<*(s.upper_bound(50));

    return 0;
}
