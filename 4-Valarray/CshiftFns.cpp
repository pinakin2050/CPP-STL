#include<iostream>
#include<valarray>

void view(std::valarray<int> &vr){
    for(int x:vr)
        std::cout<<x<<" ";
}

int main(){

    std::valarray<int> vr={6,334,7,32,8};
    std::cout<<"Elements of vr: "<<std::endl;
    view(vr);

    std::valarray<int> Lvr=vr.cshift(2);
    std::cout<<std::endl<<"Elements after Left shifting : "<<std::endl;
    view(Lvr);

    std::valarray<int> Rvr=vr.cshift(-2);
    std::cout<<std::endl<<"Elements after Right shifting : "<<std::endl;
    view(Rvr);

    return 0;
}
