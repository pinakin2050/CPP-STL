#include<iostream>
#include<iterator>
#include<vector>

int main(){
    std::vector<int> vr1{1,2,3,4,5,6};
    std::vector<int> vr2{10,20,30};

    std::vector<int>::iterator itr=vr1.begin();
    advance(itr,3);

    copy(vr2.begin(),vr2.end(),inserter(vr1,itr));

    std::cout<<"Vector elements after inserter fns: ";
    for(const auto i:vr1)
        std::cout<<i<<" ";

    return 0;
}
