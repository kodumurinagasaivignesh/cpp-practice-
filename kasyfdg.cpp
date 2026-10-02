
/*#include <iostream>
using namespace std;
class num
{
    int real,img;
public:
    num()
    {
        real=10;
        img=12;
    }
    void dis()
    {
        cout<<real<<" "<<img<<endl;

    }

};
int main()
{

    class num obj;
    obj.take();
    class num obj2;

}*/

//copy constrof user defined
/*#include<iostream>
using namespace std;
class num
{
	int a;
	public:
		num(int x)
		{
			a=x;
		}
		num(num &r)
		{
			a=r.a;
		}
		void dis()
		{cout<<a;
		}
};
int main()
{
	class num n(10);//para con
	n.dis();
	class num n2(n);//copy con
	n2.dis();
}*/

//create a class laptop with data members company(str),
//cost float,write three constructs and dis play the data  for the 3 obj


#include <iostream>
using namespace std;

class Laptop {
    string company;
    float cost;

public:
    Laptop() {
        company = "hp";
        cost = 0;
    }
    Laptop(string c, float p) {
        company = c;
        cost = p;
    }
    Laptop(string c) {
        company = c;
        cost = 50000;
    }
    void dis() {
        cout << "Company: " << company << endl;
        cout << "Cost: " << cost << endl;
    }
};

int main() {
    Laptop l1;
    Laptop l2("Dell", 65000);
    Laptop l3("lenovo");
    l1.dis();
    l2.dis();
    l3.dis();
}
