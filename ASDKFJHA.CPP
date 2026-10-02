#include <iostream>
using namespace std;

class result{
private:
    float m1[5];
    float avg;
public:
    void in ()
    {
        int i;
        for(i=0;i<5;i++){
            cin>>m1[i];
        }


    }
    float cal()
    {int i;
    float sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+m1[i];
    }
       avg = sum/5;

    return avg;
    }

};
int main()
{
 class result r;
 r.in();
 r.cal();
}
