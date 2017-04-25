#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num,factorial=1;
	
	cout<<"enter number"<<endl;
	cin>>num;
	
	
	for(int i=1;i<=num;i++)
	{
		factorial=factorial*i;
		
	}
	cout<<factorial<<endl;
}
