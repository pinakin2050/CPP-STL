#include<iostream>
#include<utility>

int main(){
    std::pair<std::string,int> p1=std::make_pair("Pinakin",3);
    std::cout<<"Pair value is ("<<p1.first<<","<<p1.second<<").";
    return 0;
}
