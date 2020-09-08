#include<iostream>
#include<unordered_set>

int main(){
    std::unordered_set<int> us;
    us.insert(5);
    us.insert(10);
    us.insert(15);
    us.insert(20);
    us.insert(25);

    std::cout<<"Elements in Bucket 0:"<<us.bucket_size(0)<<std::endl;
    std::cout<<"Elements in Bucket 1:"<<us.bucket_size(1)<<std::endl;
    std::cout<<"Elements in Bucket 2:"<<us.bucket_size(2)<<std::endl;
    std::cout<<"Elements in Bucket 3:"<<us.bucket_size(3)<<std::endl;
    std::cout<<"Elements in Bucket 4:"<<us.bucket_size(4)<<std::endl;
    std::cout<<"Elements in Bucket 5:"<<us.bucket_size(5)<<std::endl;
    std::cout<<"Elements in Bucket 6:"<<us.bucket_size(6)<<std::endl;
    std::cout<<"Elements in Bucket 7:"<<us.bucket_size(7)<<std::endl;
    std::cout<<"Elements in Bucket 8:"<<us.bucket_size(8)<<std::endl;

    return 0;
}
