#include<iostream>
#include<vector>

int main(){
    std::vector<int> v1{1,2,3,4,5,6,7};
    std::vector<int> v2;

    std::copy(v1.begin(),v1.end(),back_inserter(v2));

    std::cout<<"Elements of v2:";
    for(auto i=v2.begin();i!=v2.end();i++)
        std::cout<<*i<<" ";

    return 0;
}
