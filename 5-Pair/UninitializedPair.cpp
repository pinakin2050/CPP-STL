#include<iostream>
#include<utility>

int main(){
    std::pair<int,float> p1;
    std::pair<char,int> p2;
    std::pair<float,std::string> p3;
    std::pair<bool,int> p4;
    std::pair<std::string,char> p5;

    std::cout<<"Default value for pair<int,float>: "<<p1.first<<" "<<p1.second<<std::endl;
    std::cout<<"Default value for pair<char,int>: "<<p2.first<<" "<<p2.second<<std::endl;
    std::cout<<"Default value for pair<float,string>: "<<p3.first<<" "<<p3.second<<std::endl;
    std::cout<<"Default value for pair<bool,int>: "<<p4.first<<" "<<p4.second<<std::endl;
    std::cout<<"Default value for pair<string,char>: "<<p5.first<<" "<<p5.second<<std::endl;
    return 0;
}
