#include<iostream>
using namespace std;
#include<fstream>
#include<conio.h>
int main()  
{
  ofstream ff;
  ff.open("20nov.cpp",ios::out);
  ff<<"happy"<<endl;
  ff.close();
  ifstream rr;
  rr.open("20nov.cpp",ios::in);
  char name;
  name=rr.get();
  while( name!=EOF) 
  {
    cout<<name;
    name=rr.get();
  }
  rr.close();
  return 0;
}