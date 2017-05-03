#include <iostream>

using namespace std;

int main()
{
	int a,b,num,count;
	
	cout<<"Enter number"<<endl;
	cin>>num;
	
	for(int i=num-1;i<=1;i--)
	{
		for(b=2;b<a;b++)
		{
			if(i%b==0)
			count++;
		}
		
		if(count==0)
		{
			if(i==1)
			{
			cout<<"No prime number less than 2"<<endl;
			break;
			}
			cout<<a<<" is the last prime number "<<endl;
			break;
		}
		count==0;
		
	}
	return 0;
}
