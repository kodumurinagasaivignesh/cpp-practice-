/*#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
    int *p=new int;
    char *c=new char;
    float *f=new float;
    *p=100;
    cout<<*p<<endl;
    *c='t';
    cout<<*c<<endl;
    *f=1.43;
    cout<<*f;
}*/

/*
#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    cout<<&a[3]<<endl;
    cout<<*(a+3)<<endl;
    cout<<*(3+a);
}*/




/*#include<iostream>
using namespace std;
#include<stdlib.h>
int main()
{
    int *r;
    int size;
    int sr;
    int count;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    r=new int[size];
    int i;
    cout<<"enter the data"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>*(r+i);
    }
    cout<<"enter the number to search"<<endl;
    cin>>sr;
    for (i=0;i<size;i++)
    {
        if (*(r+i)==sr)
        {
            count++;
        }
    }
    if(count>0)
    {
        cout<<sr<<"exist in array"<<endl;
    }
    else
        cout<<sr<<" not found"<<endl;

    delete []r;
    cout<<"value after deletion"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<*(r+i)<<endl;
    }
}*/


/*
size=entered by user
float array
opration
float a[5]={3.5,6,9,3,4}
over=(3.5+6+9+3+4+)/5=5.1
float a[5]={1.6,-0.9,-3.9,2.1,1.1}*/

#include<iostream>
using namespace std;
#include <iostream>
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    float a[size];
    for (int i = 0; i < size; i++) {
    cin >> a[i];
        sum += a[i];
    }
    float average = sum / size;
    cout << "Average = " << average <<endl;
    return 0;
}











