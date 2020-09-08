#include<iostream>
#include<map>

int main(){
    std::map<int,std::string> m;
    m[1]="Aishani";
    m[2]="Loves";
    m[3]="Pinakin";

    std::cout<<m[1]<<" "<<m[2]<<" "<<m[3];

    return 0;
}
