#include<iostream>
#include<unordered_map>

int main(){
    std::unordered_map<std::string,int> um;

    um["First"]=1;
    um["Second"]=2;
    um["Third"]=3;
    um.insert({"Fourth",4});

    std::cout<<"Elements of unordered map:\nKey\tValue\n";
    for(const auto i:um)
        std::cout<<i.first<<"\t"<<i.second<<std::endl;

    return 0;
}
