/*#include<iostream>
using namespace std;
int per(int a, int b,int c)
{
    cout<<a+b+c<<endl;
}
void per(float a,float b)
{
    cout<<"secnd fn"<<a+b<<endl;
}
int per(int n,int m)
{
    cout<<"third fn"<<endl;
}
float per(float n ,float m)
{
    cout<<"forth fn"<<endl;
}
int main()
{
    int a,b;
    char m,n;
    float p,r;
    cin>>a>>b>>p>>r>>m>>n;
    cout<<per(4,5.f,6,7.f)<<endl;
    cout<<per(100,"a");
}*/
/*#include <iostream>
using namespace std;
int per(int a, int b, int c)
{
    return a + b + c;
}
float per(float a, float b)
{
    return a + b;
}
int per(int n, int m)
{
    return n + m;
}
char per(int n, char m)
{
    return m;
}

int main()
{
    int a, b;
    char m, n;
    float p, r;

    cin >> a >> b >> p >> r >> m >> n;

    cout <<  per(4, 5, 6) << endl;

    cout <<  per(4.5f, 5.7f) << endl;

    cout <<  per(100, 200) << endl;

    cout << per(100, 'a') << endl;

    return 0;
}*/
//friend fuction
/*#include <iostream>
using namespace std;
class one
{
    float a,b,c;
public:
    void in()
    {
        cout<<"enter data";
        cin>>a>>b>>c;

    }
    friend void function(class one );
    friend void fun2(class one );
};
void function (class one a1)
{
    cout<<a1.a*a1.b<<endl;

}
void fun2(class one nn)
{
    cout<<(nn.a/nn.b)*nn.c;
}
int main()
{
    class one t;
    t.in();
    function(t);
    fun2(t);
}*/
#include<iostream>
using namespace std;
class one
{
    char name;
public:
    void take1()
    {
        cout<<"enter data";
        cin>>name;
    }
    friend char largest(class one,class two,class three);
};
class two
{
    char fame;
public:
    void take2()
    {
        cout<<"enter data ";
        cin>>fame;

    }
    friend char largest(class one,class two,class three);
};
class three
{
    char game;
public:

    void take3()
    {
        cout<<"enter data";
        cin>>game;
    }
    friend char largest(class one,class two,class three);
};
char largest(class one t1,class two t2,class three t3)
{
    if (t1.name>t2.fame&&t1.name>t3.game)
        return t1.name;
    else if (t2.fame>t1.name&&t2.fame>t3.game)
        return t2.fame;
    else
        return t3.game;
}
int main()
{
    class one obj1;
    class two obj2;
    class three obj3;
    obj1.take1();
    obj2.take2();
    obj3.take3();
    cout<<largest(obj1,obj2,obj3);
}
