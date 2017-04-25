#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,swap;
	
	cout<<"Enter num1"<<endl;
	cin>>a;
	
	cout<<"Enter num2"<<endl;
	cin>>b;
	
	swap=a;
	a=b;
	b=swap;
	
	cout<<"After swaping "<< a<<endl;
	cout << b <<endl;
	
}
