#include<iostream>
#include<map>

int main(){
    std::map<std::string, std::string> language;

    language["py"] = "Python";
    language["cpp"] = "C Plus Plus";
    language["js"] = "Javascript";
    language["rb"] = "Ruby";
    language["rb"] = "Ruby-1";
    language["cs"] = "C Sharp";

    language.insert(std::make_pair("pl", "Pearl"));

    for(auto& m : language)
        std::cout << m.first << ":" << m.second <<std::endl;



    return 0;
}
