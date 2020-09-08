#include<iostream>
#include<vector>

void setVector(std::vector<int> &v1){
    int s,element;
    std::cout<<"Enter Vector Size:";
    std::cin>>s;

    for(int i=0;i<s;i++)
    {
        std::cout<<"\nEnter Element: ";
        std::cin>>element;
        v1.push_back(element);
    }
}

void getVector(const std::vector<int> &v1){ //Pass vector as ocnst reference when you don't want fns to modify it.
    std::cout<<"Vector elements: ";
    for(auto i=v1.begin();i!=v1.end();i++)
        std::cout<<*i<<" ";
}

int main(){
    std::vector<int> v1;

    setVector(v1);
    getVector(v1);

    return 0;
}
