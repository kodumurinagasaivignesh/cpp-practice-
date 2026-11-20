// #include<iostream>
// using namespace std;
// #include<fstream>
// #include<conio.h>
// int main()  
// {
//   ofstream ff;
//   ff.open("20nov.cpp",ios::out);
//   ff<<"happy"<<endl;
//   ff.close();
//   ifstream rr;
//   rr.open("20nov.cpp",ios::in);
//   char name;
//   name=rr.get();
//   while( name!=EOF) 
//   {
//     cout<<name;
//     name=rr.get();
//   }
//   rr.close();
//   return 0;
// }




// #include<iostream>
// using namespace std;
// #include<fstream>
// #include<conio.h>
// int main(){
//     ofstream ff; //ofstream is class and ff is object of ofstream
//     ff.open("nov20th.cpp",ios::out);
//     char fame;
//     cin>>fame;// 1st char
//     while(fame!='9'){
//         ff.put(fame);
//         cin>>fame;// 2nd char and onwards 
//     }
//     ff.close();
    
//     ifstream nn;// reading purpose
//     nn.open("nov20th.cpp",ios::in);
//     nn.close();
//     char name;
//     name=nn.get();
//     cout<<name;
//     while(!nn.eof()){
//         cout<<name;
//         name=nn.get();
//     }

// }




// block data :
#include<iostream>
using namespace std;
#include<fstream> 
class student{
    public:
    string name;
    int roll;
    float cgpa;
    public:
        void take()
        {
            cin>>name>>roll>>cgpa;;

        }
        void dis()
        {
            cout<<"name is "<<"name is" << name<<"\t"<<"roll is "<<roll<<"\t"<<"cgpa is "<<cgpa<<endl;
        }
};
int main(){
    student s[3];
    ofstream ff;
    ff.open("nov20th.cpp",ios::out);
    for(int i=0;i<3;i++)
    {
        s[i].take();
        ff.write((char*)&s[i],sizeof(s[i]));
    }
    ff.close();
    ifstream nn;
    nn.open("nov20th.cpp",ios::in);
    for(int i=0;i<3;i++)
    {
        nn.read((char*)&s[i],sizeof(s[i]));
        s[i].dis();
    }
    nn.close();
}

