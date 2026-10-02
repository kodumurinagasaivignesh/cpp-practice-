/*#include <iostream>
using namespace std;

class Data
{
    int a, b;
    float c;

public:

    // Parameterized constructor
    Data(int aa, int bb, float cc)
    {
        a = aa;
        b = bb;
        c = cc;
    }

    // Copy constructor
    Data(const Data &r)
    {
        a = r.a;
        b = r.b;
        c = r.c;
    }

    // Member function
    void process()
    {
        cout << a * b * c << endl;
    }

    // Destructor
    ~Data()
    {
        cout << "Object destroyed" << endl;
    }
};

int main()
{
    Data d(5, 8, 1);
    d.process();

    Data d2(d);
    d2.process();

    return 0;
}*/

/*#include<iostream>
#include<fstream>
using namespace std;
int main ()
{

    ofstream ff;
    ff.open("hello.cpp");
    ff<<"love you baache\n";
    ff<<"kya kar rahe";
    ff.close();
    char name[40];
    ifstream ff2;
    ff2.open("hello.cpp");
    while(ff2.eof())
    {
     ff2.getline(name,40);
       cout<<name;
    }

    ff2.close();


}*/




/*#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{

    ifstream fame;

    fame.open("newcsir.c");
    var = fame.get();
    while(!fame.eof())
    {
        cout<<var;


    }
    fame.close();

}*/


#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("kasyfdg.cpp");
    char ch;
    while (file.get(ch))
    {
        cout << ch;
    }
    file.close();
    return 0;
}
