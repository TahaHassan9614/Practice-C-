#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	int size;
	
	
	cout<<"Enter size"<<endl;
	cin>>size;
	
	int arr[size];
	
	
	for(int i=0;i<=size;i++)
	{
		cout<<"Enter "<<i<<" Number"<<endl;
		cin>>arr[i];
	}
	
	for(int j=0;j<=size;j++)
	{
		
		cout<<"Array [ "<<j<<" ] = ";
		cout<<arr[j]<<endl;
	}
	
	int max=arr[0];
	for(int k=0;k<=size;k++)
	{
		if(arr[k]>max)
		max=arr[k];
	}
	
	cout<<"The maximun number of array is "<<max<<endl;
	
}
