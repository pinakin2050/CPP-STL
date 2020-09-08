#include<iostream>
#include<unordered_map>

int main(){
    std::unordered_map<std::string,double> um;
    um.insert({"PI",3.14});
    um.insert({"root2",1.414});
    um.insert({"root3",1.732});
    um.insert({"log10",2.302});
    um.insert({"loge",1});
    um.insert({"e",2.718});

    std::string key="PI";
    if(um.find(key)!=um.end())
        std::cout<<"Found "<<key<<" and the value is "<<um[key]<<std::endl;
    else
        std::cout<<key<<" not found"<<std::endl;

    key="Lamda";
    if(um.find(key)!=um.end())
        std::cout<<"Found "<<key<<" and the value is "<<um[key]<<std::endl;
    else
        std::cout<<key<<" not found"<<std::endl;

    return 0;
}
