#include<iostream>
#include<unordered_set>

int main(){
    std::unordered_set<int> us;
    us.insert(4);
    us.insert(1);
    us.insert(10);
    us.insert(3);
    us.insert(10); //It won't get inserted

    std::cout<<"Elements of Unordered_set: ";
    for(auto i:us)
        std::cout<<i<<" ";

    return 0;
}
