//create a class name as computer with data members
//companyname,cost,type(laptop od desktop enter the data
//with non inline member fun and ddiaplay details of computer with inline member

#include<iostream>
using namespace std;
class computer{
    char name[32];
    int cost;
    char type[20];
public:
    int take();
    int output(){
      cout<<name<<cost<<type;
    }

}c1;

int computer::take()
{
    cout<<"enter name of pc";
    cin>>name;
    cout<<"enter cost";
    cin>>cost;
    cout<<"enter pc type desktop or laptop";
    cin>>type;
}
int main()
{class computer c2;
c2.take();
cout<<c2.output();
}
