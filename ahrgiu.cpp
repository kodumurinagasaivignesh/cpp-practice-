//#include<iostream>
//using namespace std;
//int main()
//{
//    float a=25.33;
//    float &b = a;
 //   cout<<a<<endl<<b<<endl;
  //  b=1000;
//    cout<<a<<endl<<b<<endl;
//}

/*#include<iostream>
using namespace std;
long int rec(int num)
{
    if(num>1)
    return(num*rec(num-1));
    else
    return 1;
}
int main()
{
    int data;
    cin>>data;
    cout<<rec(data);

}*/

#include<iostream>
using namespace std;
long int rec(int num)
{
    for(int i=0;i<num;i++)
    {
        i+=i;
    }
}
int main()
{
    int i;
    cin>>i;
    cout<<rec(i);
}

