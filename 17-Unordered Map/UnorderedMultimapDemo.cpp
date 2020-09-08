#include<iostream>
#include<unordered_map>

int main(){
    std::unordered_multimap<std::string,int> ump;

    ump.insert({"Apple",1});
    ump.insert({"Banana",2});
    ump.insert({"Apple",3});
    ump.insert({"Tomato",4});
    ump.insert({"Guava",5});
    ump.insert({"Apple",3});
    ump.insert({"Berry",6});

    std::cout<<"Elements of unordered multimap:\nKey\tValue\n";
    for(const auto i:ump)
        std::cout<<i.first<<"\t"<<i.second<<"\n";

    return 0;
}
