#include<iostream>
#include<vector>

void displayVector(std::vector<int> &v){
    for(auto i=v.begin();i!=v.end();i++)
        std::cout<<*i<<" ";
}
int main(){
    std::vector<int> v1,v2;

    for(int i=1;i<=5;i++)
        v1.push_back(i);

    for(int i=6;i<=10;i++)
        v2.push_back(i);

    std::cout<<"Elements of v1 before swapping: ";
    displayVector(v1);
    std::cout<<std::endl<<"Elements of v2 before swapping: ";
    displayVector(v2);

    v1.swap(v2);

    std::cout<<std::endl<<"Elements of v1 after swapping: ";
    displayVector(v1);
    std::cout<<std::endl<<"Elements of v2 after swapping: ";
    displayVector(v2);

    return 0;
}
