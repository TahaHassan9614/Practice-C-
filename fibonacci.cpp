#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,fibonacci,first=0,second=1;
	
	cout<<"Enter number"<<endl;
	cin>>a;
	
	for(int i=0;i<=a;i++)
	{
		if(i<=1)
		{
			fibonacci=i;
		}
		
		else
		{
			fibonacci=first+second;
			first=second;
			second=fibonacci;
		}
		
		cout<<fibonacci;
	}
}
