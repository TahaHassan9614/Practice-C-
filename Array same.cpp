#include<iostream>
using namespace std;
int main()
{
	int a[7];
	int b[7];
	
	cout<<"Enter elements of array A"<<endl;
	
	for(int i=0;i<=7;i++)
	{
		cout<<"Element "<<i<<" in Array A  ";
		cin>>a[i];
		
	}
	
	cout<<"\n";
	
	for(int i=0;i<=7;i++)
	{
		cout<<"Element "<<i<<" in Array B  ";
		cin>>b[i];
	}
	
	if(a[5]==b[5])
	{
		cout<<"Both array are same"<<endl;
	}
	
	else
	{
		cout<<"Both array are not same"<<endl;
	}
}
