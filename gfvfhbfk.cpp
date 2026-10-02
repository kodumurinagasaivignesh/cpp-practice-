/*#include<iostream>
using namespace std;
class teacher()
{

    string name ;
    float sal;
    string subjects;
public:
    void one()
    {
        cin>> name>> sal>> subject;

    }
    void two()
    {

        cout<< name<<endl<<sal<<endl<<subject;
    }
    float salary()
    {
        return sal
    }
};
int main()
{
   class teacher t[4];
	int i,j=0;
	for(i=0;i<4;i++){
		t[i].one();
	}
	float salarylargest=t[0].salary();

	for(i=1;i<4;i++){
		if(t[i].salary()>salarylargest){
			salarylargest=t[i].salary();
			j=i;
		}
	}
	t[j].two();

}*/

/*#include<iostream>
using namespace std;
class board
{
	string cat;
	float cost;
	public:
		void take()
		{
			cin>>this->cat>>cost;
		}
		void dis()
		{
			cout<<cat<<this->cost<<endl;
		}
		string bd()
		{
			return cat;
		}
};
int main()
{
	class board b[3];
	int i,j=-1;
	string bs;
	for(i=0;i<3;i++)
	{
		b[i].take();
	}
	cout<<"enter the board cat to search";
	cin>>bs;
	for(i=0;i<3;i++)
	{
		if(b[i].bd()==bs)
		b[i].dis();
		j++;
	}
	if(j==-1)
	cout<<"board cat you are searching does not exist";
}*/


#include<iostream>
using namespace std;
int main()
{
	float a[4][4];
	int i,j,sum;
//	for(i=0;i<5;i++){
//		cin>>a[i];
//	}
//	for(i=0;i<5;i++){
//		cout<<a[i]<<" ";
//	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++){
			cin>>a[i][j];
			sum=sum+a[i][j];

		}
	}

	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++){
            a[1][1]==smallest;
			if(a[i][j]<<smallest)
                cout<<a[i][j];

		}
		cout<<endl;

	}
		cout<<"sum of array elements is="<<sum<<endl;
}
