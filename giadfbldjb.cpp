#include<iostream>
using namespace std;
class emp
{
    char name[20];
    char designation[20];
    float salary;
public:
    void in();
    void process();

}e[5];
void emp::in()
{ cout<<"enter data";
cin>>name>>designation>>salary;

}
void emp::process()
{
    cout<<"enter data";
    cout<<name<<endl<<designation<<endl<<salary<<endl;
}
int main()
{int i;
float avg
for(i=0;i<5;i++){
    e[i].in();
}
for(i = 0; i < 5; i++)
{
    avg += e[i].process();
}
avg = avg / 5;
cout <<avg;
}
