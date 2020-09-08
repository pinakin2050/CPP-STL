#include<iostream>
#include<set>

class User{
public:
    std::string name;
    const int id;
    int score;

    //Without overwriting these operators the prog won't work bcz set sorts the data internally.
    //I am sorting on the 'Id' field.
    bool operator < (const User& user)const{
        return id < user.id;
    }

    bool operator > (const User& user)const{
        return id > user.id;
    }
};

int main(){
    std::set<User> myUserSet = {{"Pinakin",1,300}, {"Aishani",2,330}, {"Neel",3,200}};

    std::cout << "Player Details:" << std::endl;
    for(const auto &i:myUserSet)
        std::cout << "Name:" << i.name << "\tID:" << i.id << "\tScore:" << i.score << std::endl;

    return 0;
}
