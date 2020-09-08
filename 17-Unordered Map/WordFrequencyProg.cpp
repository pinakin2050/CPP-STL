#include<iostream>
#include<unordered_map>
#include<sstream>

void printFrequency(const std::string &str){
    std::unordered_map<std::string,int> wordFreq;
    std::stringstream ss(str);
    std::string word;

    while(ss>>word){
        wordFreq[word]++;
    }

    std::cout<<"Word\tFrequency\n";
    for(const auto i:wordFreq)
        std::cout<<i.first<<"\t"<<i.second<<std::endl;
}
int main(){
    std::string str="Geeks for Geeks test program test test";
    printFrequency(str);
    return 0;
}
