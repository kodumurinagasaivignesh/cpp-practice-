#include<iostream>
using namespace std;
class data
{
    int a,b;
    const float c;
public:
    data(int aa,int bb,float cc):a(aa),b(bb),c(cc)
    {
        a=aa;
        b=bb;

    }
    void process()
    {
        cout<<a*b*c<<endl;
    }
    ~data()
    {
        cout<<"object distroyed"<<endl;
    }
};
int main()
{
    {class data d(5,8,1);
        d.process();
}
}
