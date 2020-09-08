#include<iostream>
#include<vector>

int main(){
    std::vector<int> v;
    v.empty() ? std::cout<<"Is v empty? - True"<<std::endl : std::cout<<"Is v empty? - False"<<std::endl;

    for(int i=1;i<10;i++)
        v.push_back(i);

    v.empty() ? std::cout<<"Is v empty now? - True"<<std::endl : std::cout<<"Is v empty now? - False"<<std::endl;
    return 0;
}
