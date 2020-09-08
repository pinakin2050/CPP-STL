#include<iostream>
#include<map>

int main(){
    std::map<char,int> m;

    m['a']=1;
    m['b']=2;
    m['c']=3;
    m['d']=4;
    m['e']=5;
    m['f']=6;

    std::cout<<m.at('a')<<" "<<m.at('b')<<" "<<m.at('c');

    return 0;
}
