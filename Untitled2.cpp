#include<iostream>
using namespace std;
class basic
{protected:
    int a;
public:
    void one()
    {
        cin>>a;
    }
};
class basic2:public basic
{protected:

    int b;
    public:
    void two()
    {
        cin>>b;

    }

};
class derived:public basic2
{
    int c;
    public:
    void three()
    {
        cin>>c;
    }
    void process ()
    {
        if(a>b&&a>c)
        {
            cout<<a;
        }
        else if(b>a&&b>c)
        {
            cout<<b;
        }
        else
        {
            cout<<c;
        }
    }

};
int main ()
{
   class derived dd;
   dd.one();
   dd.two();
   dd.three();
   dd.process();
}
//take tgpa fore each semister(1 to 4) and calculate cgpa using mulitilevel inheritence
cgpa =(tgpa1+tgpa2+tgpa3+tgpa4)/4//tgpa float
