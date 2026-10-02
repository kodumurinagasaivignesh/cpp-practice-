#include<iostream>
#include<string>
using namespace std;
class students
{
    /*string s="Vignesh";
    cout<<s.at(4)<<endl;
    string s2;
    s2=s.substr(2,8);
    cout<<s2<<endl;
    cout<<s.rfind("esh")<<endl;
    cout<<s.find_last_of("ish");

    string s;
    getline(cin,s); //multiple words prints
    cout<<s;
    cin>>s;
    cout<<s;*/

public:
    string name;
    int roll;
    float cgpa;
};
int main()
{

    string students::*ptr=&students::name;
    int students::*ptr1=&students::roll;
    float students::*ptr2=&students::cgpa;
    class students s11;
    s11.name="Vignesh";
    s11.roll=37;
    s11.cgpa=1000;
    cout<<s11.*ptr<<endl;
    cout<<s11.*ptr1<<endl;
    cout<<s11.*ptr2<<endl;
}
