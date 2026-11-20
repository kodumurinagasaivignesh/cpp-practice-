
//operator overloading preincriment
/* #include<iostream>
 using namespace std;
 class dis
 {
    int met,cm;
    public:
    void in()
    {
        cin>>met>>cm;
    }
    void operator ++(int m)
    {
        cout<<met++<<endl;
        cout<<cm++;
    }


 };
 int main ()
 {
    class dis d;
    d.in();
    //++d;//fun cALL
    d.operator++(100);
    d.operator++(33);
}*/

/*#include<iostream>
 using namespace std;
 class dis
 {
    int met,cm;
    public:
    void in()
    {
        cin>>met>>cm;
    }
    friend void operator ++(class dis &n,int num);
 };
 void operator++(class dis &nn,int p)
 {
    cout<<nn.met++<<endl;
    cout<<nn.cm++;
 }
 int main ()
 {
    class dis dd;
    dd.in();
    operator++(dd,100);
    operator++(dd,33);
 }*/


 //basic to class with constructor
 /*#include<iostream>
 using namespace std;
 class spam
 {
    int min ,sec;
    public:
    spam(int x)
    {
        min=x/60;
        sec=x%60;
    }
    void dis()
    {
        cout<<min<<endl<<sec;
    }
 };
 int main()
 {

     class spam obj(369);
     obj.dis();
 }*/


 //#include<iostream>
// using namespace std;
// class name
// {int feet , inches;
//     public:
//         name(int value)//value = 190
//         {
//             feet=value/12;
//             inches=value%12;
//         }
//         void out()
//         {
//             cout<<"your height in feet and inches is ="<<feet<<" "<<inches;
//         }
// };
// int main()
// {
//     int num;
//     cout<<"Enter the height in inches";
//     cin>>num;//190
//     class name n(num);
//     n.out();
// }

//write a program with class meter and cm and convert it into met means converting from class to basic
#include <iostream>
using namespace std;
class Distance {
    float met,cm;
public:
    void input()
    {
        cin>>met>>cm;
    }
    operator float() {
    return met+ (cm / 100.0f);
    }
};
int main() {

    class Distance dd;
    dd.input();
    float n;
    n=dd.operator float();
    cout<<n;
}
