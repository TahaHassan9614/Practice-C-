#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"Enter 1st number"<<endl;
	cin>>a;
	cout<<"Enter 2nd number"<<endl;
	cin>>b;
	cout<<"Enter 3rd number"<<endl;
	cin>>c;
	
	
	if(a>b && a>c)
	{
		cout<<"1st number is greatest"<<endl;
	}
	
	else if(b>a && b>c)
	{
		cout<<"2nd number is greatest"<<endl;
	}
	
	else if(c>a && c>b)
	{
		cout<<"3rd number is greatest"<<endl;
	}
	
}

