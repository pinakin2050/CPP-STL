#include<iostream>
#include<forward_list>

void setList(std::forward_list<double> &l){
    int s;
    double element;
    std::cout<<"Enter size of the list:";
    std::cin>>s;

    for(int i=0;i<s;i++)
    {
        std::cout<<"Enter element:";
        std::cin>>element;
        l.push_front(element);
    }
}

void getList(const std::forward_list<double> &l){
    for(auto i=l.begin();i!=l.end();i++)
        std::cout<<*i<<" ";
}

bool compare(double a,double b){
    return ((int)a==(int)b);
}

int main(){
    std::forward_list<double> list1;

    setList(list1);

    std::cout<<"List before unique():";
    getList(list1);

    list1.sort(); //sorting cuz the unique fns compares two consecutive elements

    list1.unique();

    std::cout<<"\nList after unique():";
    getList(list1);

    list1.unique(compare);

    std::cout<<"\nList after list1.unique(compare):";
    getList(list1);

    return 0;
}
