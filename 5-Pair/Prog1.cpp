#include<iostream>
#include<utility>

int main(){
    std::pair<int,char> p;
    p.first=7;
    p.second='A';

    /* Different ways to initialize pair
    pair<int,char> p1;
    pair<char,float> p2('B',5.6);
    pair<int,char> p3(p1);
    */

    std::cout<<"First element of pair: "<<p2.first<<std::endl;
    std::cout<<"Second element of pair: "<<p2.second;
    return 0;
}
