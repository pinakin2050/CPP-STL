#include<iostream>
#include<unordered_set>

void getSet(const std::unordered_set<int> &s){
    for(auto i:s)
        std::cout<<i<<" ";
}
template <class T>
T join(const T &s1,const T &s2){
    T s(s1);
    s.insert(s2.begin(),s2.end());
    return s;
}

int main(){
    std::unordered_set<int> s1,s2,s3;
    s1={1,2,3,4};
    s2={5,6,7};
    s3=join(s1,s2);

    std::cout<<"Elements of s1 before equal operator: ";
    getSet(s1);

    std::cout<<"\nElements of s2 before equal operator: ";
    getSet(s2);

    std::cout<<"\nElements of s3 before equal operator: ";
    getSet(s3);

    s1=s3;

    std::cout<<"\nElements of s1 after s1=s3: ";
    getSet(s1);

    return 0;
}
