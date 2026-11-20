/*#include<iostream>
using namespace std;
class first//base class
{protected:
    int a,b;
public:
    void take1()
    {
        cin>>a>>b;
    }
};
class second:public first //second is derived class
{
    int c;
public:
    void take2()
    {
        cin>>c;
    }
    void process()
    {

        cout<<a*b*c;
    }
};
int main()
{
    class second s1;
    s1.take1();
    s1.take2();
    s1.process();

}
*/


/*#include<iostream>
using namespace std;
class sem_1
{
protected:
    char name[20];
    int rollno;
    float tgpa1;
public:
    void input()
    {
        cin>>name>>rollno>>tgpa1;
    }

};
class sem_2:public sem_1
{
    float tgpa2;
    public:
    void input2()
    {
        cin>>tgpa2;
    }

    void cal()
    {
        cout<<(tgpa1+tgpa2)/2;
    }
};
int main()
{
    class sem_2 tt;
    tt.input();
    tt.input2();
    tt.cal();

}*/


//create a class named as assignment wih two protected data members ca1,ca2,
//derive as a class examm from base class assignment
//and having data members att_marks,ete_marks display the detail is student pass or fail in subject passing criteria is>=40 marks total and >=30 in mte or ete or together



#include <iostream>
#include <string>
using namespace std;

class Assignment {
protected:
    double ca1;
    double ca2;
    double ete;

public:
    void take() {
        cin >> ca1 >> ca2 >> ete;
    }
};

class Exam : public Assignment {
private:
    double att_marks;
    double ete_marks;

public:
    void take2() {
        cin >> att_marks >> ete_marks;
    }

    void Result() {
        double total_marks = ca1 + ca2 + ete + att_marks + ete_marks;

        if (total_marks >= 40 &&
            (ete >= 30 || ete_marks >= 30 ||
             (ete + ete_marks) >= 30)) {
            cout << "pass" << endl;
        } else {
            cout << "fail" << endl;
        }
    }
};

int main() {
    class Exam ee;
    ee.take();
    ee.take2();
    ee.Result();

    return 0;
}
