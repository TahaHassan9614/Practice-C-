#include<iostream>
using namespace std;
int main()
{
	int a,reverse,b;
	
	cout<<"Enter number"<<endl;
	cin>>a;
	
	while(a!=0)
	{
		b=a%10;
		reverse=reverse*10+b;
		a/=10;
	}
	
	cout<<reverse<<endl;
}
