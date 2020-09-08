#include<iostream>
#include<unordered_set>

int main(){
    std::unordered_set<int> us{1,2,3,4,5,6,7};
    std::cout<<"Max bucket count for the set: "<<us.max_bucket_count();
    return 0;
}
