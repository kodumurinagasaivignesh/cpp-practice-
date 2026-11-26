// #include<iostream>
// using namespace std;
// int main()
// {
//   float num,x;
//   cout<<"Enter a number: ";
//   cin>>num;
//   try
//   {
//     if(num<0)
//       throw x;
      
//     else
//       cout<<"marks are valid"<<endl;
//   }
//   catch(float)
//   {
//     cerr<<"Negative number not allowed"<<endl;
//   }
//   return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//   float num,x;
//   cout<<"Enter a number: ";
//   cin>>num;
//   try
//   {
//     if(num<0)
//       throw 'r';
//       cout<<"none";
      
//     else
//       cout<<"marks are valid"<<endl;
//   }
//   catch(char)
//   {
//     cout<<"Negative number not allowed"<<endl;
//   }
//   return 0;
// }


#include<iostream>
using namespace std;    
int main()
{
  char name;
  cout<<"Enter a number: ";
  cin>>name ; 
  try
  {
   if (name>=65 && name<=90)
   {
     throw 2;
   }
   else if (name>=97 && name<=122)
   {
     throw 7.5;
   }
   else if (name>=48 && name<=57 )
   {    throw 'r';
   }
   else
   {
    cout<<"entered char is special symbols";
   }
  }
  catch(char f)
  {
    cout<<"you have entered a number between 0-9";
  }         
  catch(int s)
  {
    cout<<"you have entered a capital letter";
  }
  catch(float m)
  {
    cout<<"you have entered a small letter";
  }
  
}