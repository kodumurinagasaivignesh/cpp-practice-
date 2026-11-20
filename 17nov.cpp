/*#include<iostream>
using namespace std;
class base
{public:
    void func1()
    {
        cout<<"iam base classs"<<endl;
    }

};
class derived:public base
{
public:
    void func1()
    {
        cout<<"iam derived class";
    }
};
int main()
{
    class base *b;
    class base b1;
    b=&b1;
    b->func1();
    class derived *d;
    class derived d1;
    d=&d1;
    d->func1();
}*/
/*#include<iostream>
using namespace std;
class shape
{
public:
    virtual void area()
    {
    cout<<"nothing to calculate"<<endl;
    }
};
class rectangle:public shape
{
    float a,b;
public:
    void area()
    {
        cin>>a>>b;
        cout<<"we are in rectangle and area is = "<<a*b<<endl;

    }
};
class triangle:public shape
{
    float b,h;
public:
    void area()
    {
        cin>>b>>h;
        cout<<"we are in triangle and area is = "<<0.5*b*h<<endl;
    }
};
int main()
{
    class shape *s,s1;
    s=&s1;
    s->area();
    class rectangle *r,r1;
    r=&r1;
    r->area();
    class triangle *t,t1;
    t=&t1;
    t->area();

}*/
/*#include<iostream>
#include<stdlib.h>
using namespace std;
class one
{public:
    one()
    {
        cout<<"we are in class one"<<endl;
    }
    ~one()
    {        cout<<"we are in destof class one"<<endl;
    }
};
class two:public one
{public:
    two()
    {
        cout<<"we are in class two "<<endl;
    }
    ~two()
    {        cout<<"we are in destof class two"<<endl;
    }
};
int main()
{
    class one *k;
    k=new two;
    delete k;

}*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class sem1
{public:
	virtual void s1()
	{
		cout<<"number fun s1 called"<<endl;

	}
	void s2()
	{
		cout<<"member fun s2 called"<<endl;

	}
};
class sem2:public sem1
{public:
	void s1()
	{
		cout<<"member fun s1 called"<<endl;

	}
};
int main()
{class sem1 *ss;
class sem1 ss1;
ss=&ss1;
ss1->s1();
ss1->s2();
}
