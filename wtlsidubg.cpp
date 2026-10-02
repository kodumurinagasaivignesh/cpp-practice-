/*//*#include<iostream>
using namespace std;
class student
{
    string name;
    float marks[8];
    float highest;
public:
    void take()
    {
        cout<<"Enter the data";
        for (int i=0;i<8;i++)
        {
            cin>>marks[i];
        }
    }
    void process();
    void dis();
};
void student::process()
{
    highest = marks[0];
    for (int i=1;i<8;i++)
    {
        if (marks[i]>highest)
            highest=marks[i];
    }
}
    void student::dis()
    {

        cout<<name<<"highest marks in subject are"<<highest<<endl;
    }
int main()
{
    class student ss;
    ss.take();
    ss.process();
    ss.dis();
}*/

#include<iostream>
using namespace std;

int main()
{
    int a[2][3][4];
    int i, j, k;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                cin >> a[i][j][k];
            }
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                cout << a[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}


