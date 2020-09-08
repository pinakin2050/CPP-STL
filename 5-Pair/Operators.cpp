#include<iostream>
#include<utility>

int main(){
    std::pair<int,int> p1(7,9);
    std::pair<int,int> p2(7,7);

    std::cout<<"p1=("<<p1.first<<"'"<<p1.second<<")"<<std::endl;
    std::cout<<"p2=("<<p2.first<<"'"<<p2.second<<")"<<std::endl;

    (p1==p2) ? std::cout<<"p1==p2? - true"<<std::endl : std::cout<<"p1==p2? - false"<<std::endl;
    (p1!=p2) ? std::cout<<"p1!=p2? - true"<<std::endl : std::cout<<"p1!=p2? - false"<<std::endl;
    (p1>=p2) ? std::cout<<"p1>=p2? - true"<<std::endl : std::cout<<"p1>=p2? - false"<<std::endl;
    (p1<=p2) ? std::cout<<"p1<=p2? - true"<<std::endl : std::cout<<"p1<=p2? - false"<<std::endl;
    (p1>p2) ? std::cout<<"p1>p2? - true"<<std::endl : std::cout<<"p1>p2? - false"<<std::endl;
    (p1<p2) ? std::cout<<"p1<p2? - true"<<std::endl : std::cout<<"p1<p2? - false"<<std::endl;

    return 0;
}
