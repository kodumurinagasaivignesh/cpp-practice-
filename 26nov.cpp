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


// #include<iostream>
// using namespace std;    
// int main()
// {
//   char name;
//   cout<<"Enter a number: ";
//   cin>>name ; 
//   try
//   {
//    if (name>=65 && name<=90)
//    {
//      throw 2;
//    }
//    else if (name>=97 && name<=122)
//    {
//      throw 7.5;
//    }
//    else if (name>=48 && name<=57 )
//    {    throw 'r';
//    }
//    else
//    {
//     cout<<"entered char is special symbols";
//    }
//   }
//   catch(char f)
//   {
//     cout<<"you have entered a number between 0-9";
//   }         
//   catch(int s)
//   {
//     cout<<"you have entered a capital letter";
//   }
//   catch(float m)
//   {
//     cout<<"you have entered a small letter";
//   }
  
// }



// #include<iostream>
// using namespace std;  
// void function(int a, int b)
// {try
//   {
//     if(a<=0||b<=0)
//     {
//       throw w;
//     }
//     else
//     {
//       cout<<a*b<<endl;
//     }
//   }
//   catch(char )    
//   {
//     cout<<"Negative number not allowed"<<endl;
//   }
// }
// int main()
// {
// function(3,4);
// function(0,4);
// function(3,0); 
// function(10,20);
// }





// #include<iostream>
// using namespace std;
// class data;
// {float marks;
// public:
// 	void in()
// 	{cout<<"enter the marks";
// 	cin>>marks;
// 	try
// 	{if(marks>=40)
// 	cout<<"you are pass";
// 	else
// 	throw marks;
// 	}
// 	catch(float)
// 	{
// 		cout<<"you must give the exam again";
// 	}
// 	catch()
// 	{
// 		cout<<"an error occurred";  
// 	}
	
// };
// int main()
// {
// 	class data dd;
// 	dd.in();
// 	class data dd2;
// 	dd2.in();
// }


//prime number 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    try {
        if (n <= 1) {
            throw n ;
        }

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                cout << n << " is not prime." << endl;
                return 0;
            }
        }
        cout << n << " is prime." << endl;
    } 
    catch (int) {
        cout << "invalid input " << endl; 
    }

    return 0;
}
