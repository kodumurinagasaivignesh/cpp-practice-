// /*#include<iostream>
// using namespace std;
// class height
// {
//     int feet,inch;
// public:
//     void take()
//     {
//         cin>>feet>>inches;
//     }
//     void operater+(class height h2)
//     {
//         cout<<this->feet+h2.feet<<endl;
//         cout<<this->inches+h2.inches;
//     }
// };
// int main()
// {
//     class height h1;
//         h1.take();
//         h2.take();
//         h1+h2;
//         //h11.operator+(h22);

// }*/
// #include<iostream>
// using namespace std;
// class money
// {

//     int rs ,ps;
// public:
//     void take()
//     {
//         cin>>rs>>ps;
//     }
//     void operator --(class money);

// };
// void money::operator--()
// {
//     cout<<this->--rs<<endl;
//     cout<<this->--ps<<endl;
// }
// int main()
// {
//  class money m;
//  mn.take();
//  --mn;
// }
// #include<stdio.h>
// using namespacestd;
// class money;
// {
// 	int rs,ps;
// 	public:
// 		void take()
// 		{
// 			cin>>rs>>ps;
// 		}
// friend void opertaor--(class money &m);
// };
// void operator--(class money &n)
// {
// 	cout<<--n.rs<<endl;
// 	cout<<--n.ps;
// }
// int main()
// {
// 	class money mm;
// 	mm.take();
// 	operator--(mm);
// }

//---------- BINARY OPERATOR OVERLOADING USING MEMBER FUN-----------
// #include<iostream>
// using namespace std;
// class height
// {int feet, inches;
// public:
//     void take()
//     {
//         cin>>feet>>inches;
//     }
//     friend void operator%(class height, class height);//prototype of friend function
// };
// void operator%(class height h1, class height h2)
// {
//     cout<<h1.feet%h2.feet<<endl;
//     cout<<h1.inches%h2.inches<<endl;
// }
// int main(){
//     class height h1 ,h2;
//     h1.take();
//     h2.take();
//     //h1+h2;//call by value h11 is left side and h22 is right side-- 
//     operator%(h1,h2);
// }
// #include<iostream>
// using namespace std;
// class money
// { 
// int rs,ps;
// public:
//     void take()
//     {
//         cin>>rs>>ps;
//     }
// void operator--();//member function
// };
// void money::operator--()
// {
//     cout<<--rs<<endl;
//     cout<<--ps<<endl;   
// }
// int main()
// {
//     class money mm;
//     mm.take();
//     --mm;
// } 

/*#include<iostream>
using namespace std;
class money
{ 
int rs,ps;
public:
    void take()
    {
        cin>>rs>>ps;
    }
 friend void operator--(class money &m);//member function
};
void operator--(class money &n)
{
    cout<<--n.rs<<endl;
    cout<<--n.ps; 
}
int main()
{
    class money mm;
    mm.take();
    operator--(mm);//call by ref
}*/

/*#include<iostream>
using namespace std;
class comp
{
    int real,imag;
    public:
    comp()
    {

    }
        comp(int a, int b)
        {
            real=a;
            imag=b;
        }
        comp operator*(class comp);//PROTOTYPE  // OPERATOR OVERLOADING
         void dis()//output
         {
            cout<<real<<endl<<imag;
         }   
};
comp comp::operator*(class comp c2)
 {
    class comp c3;
    c3.real=real*c2.real;
    c3.imag=imag*c2.imag;
    return c3;
 }
 int main()
 {
    class comp cc1(3,4);
    class comp cc2(7,8);
    class comp res;
    res=cc1*cc2;
    res.dis();
 }*/
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
 #include<iostream>
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