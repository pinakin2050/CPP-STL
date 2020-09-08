#include<iostream>
#include<unordered_set>

int main(){
    std::unordered_set<std::string> us1{"One","Two","Three"};
    std::unordered_set<std::string>::hasher fn1=us1.hash_function();

    std::cout<<"Hash of String set elements:\nElement\tHash\n";
    for(const auto i:us1)
        std::cout<<i<<"\t"<<fn1(i)<<std::endl;

    std::unordered_set<int> us2{1,2,3,4,5,6};
    std::unordered_set<int>::hasher fn2=us2.hash_function();

    std::cout<<"\n\nHash of Int set elements:\nElement\tHash\n";
    for(const auto i:us2)
        std::cout<<i<<"\t"<<fn2(i)<<std::endl;

    return 0;
}
