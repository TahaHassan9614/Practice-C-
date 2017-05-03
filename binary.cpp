#include <iostream>

using namespace std;

int main()
{
	
	int a,b,c,d,e,f,g;
	
	cout<<"Enter number"<<endl;
	cin>>a;
	
	g=a;
	for(int i=1;i!=0;i++)
	
	{
		g=g/2;
	}
	
	for(int j=a;j>=0;j++)
	{
		d=a>>j;
		
		if(d & 1)
		{
			cout<<"1";
		}
		
		else
		cout<<"0";
	}
}
