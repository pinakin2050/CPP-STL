#include<iostream>
#include<vector>

int main(){
    std::vector<int> v;

    for(int i=1;i<10;i++)
        v.push_back(i);
    std::cout<<"Size of vector before clear(): "<<v.size()<<std::endl;

    v.clear();

    std::cout<<"Size of vector after clear(): "<<v.size();

    return 0;
}
