#include<iostream>
#include<vector>

int main(){
    std::vector<int> v;

    for(int i=1;i<10;i++)
        v.push_back(i);

    std::cout<<"Vector element at front: "<<v.front()<<std::endl;
    std::cout<<"Vector element at end: "<<v.back();

    return 0;
}
