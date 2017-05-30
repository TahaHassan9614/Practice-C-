#include<iostream>
using namespace std;
int main()
{
	int *p,*q;
	int a,b;
	
	
	
	cout<<"enter 1st value of a"<<endl;
	cin>>a;
	cout<<"enter 2nd value of b"<<endl;
	cin>>b;
	
	
	p=&a;
	q=&b;
	
	cout<<a<<endl;
	cout<<&a<<endl;
	cout<<p<<endl;
	cout<<*p<<endl;
	cout<<&q<<endl;
	cout<<*q<<endl;
	

}
