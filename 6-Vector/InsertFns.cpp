#include<iostream>
#include<vector>

void displayVector(std::vector<int> &v){
    for(auto i=v.begin();i!=v.end();i++)
        std::cout<<*i<<" ";
}
int main(){
    std::vector<int> v;

    for(int i=1;i<10;i++)
        v.push_back(i);

    std::cout<<"Vector elements before insert(): ";
    displayVector(v);

    v.insert(v.begin()+2,7);

    std::cout<<std::endl<<"Vector elements after v.insert(v.begin()+2,7): ";
    displayVector(v);
    return 0;
}
