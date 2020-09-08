#include<iostream>
#include<utility>

void displayPair(std::pair<int,char> p){
    std::cout<<"("<<p.first<<","<<p.second<<")"<<std::endl;
}

int main(){
    std::pair<int,char> p1(9,'A');
    std::pair<int,char> p2(7,'P');

    std::cout<<"Pairs before swapping:"<<std::endl;
    displayPair(p1);
    displayPair(p2);

    p1.swap(p2);

    std::cout<<std::endl<<"Pairs after swapping:"<<std::endl;
    displayPair(p1);
    displayPair(p2);

    return 0;
}
