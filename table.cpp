#include<iostream>
using namespace std;
int main()
{
	
	int a,b,c=1;
	
	cout<<"Enter number"<<endl;
	cin>>a;
	
	cout<<"Enter limit"<<endl;
	cin>>b;
	
	while(c<=b)
	{
		
		cout<<a<<" * "<<c<<" = "<<a*c<<endl;
		c++;
	}
	
	
}
