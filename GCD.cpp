#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<time.h>
#include<math.h>
using namespace std;
int main()
{
	
	int a,b,gcd;
	
	cout<<"Enter 1st no."<<endl;
	cin>>a;
	cout<<"Ener 2nd no."<<endl;
	cin>>b;
	
	for(int i=0;i<=a && i<=b; i++)
	{
		
		if(a%i==0 && b%i==0)
		{
			gcd=i;
		}
	}
	
	cout<<"The GCD is "<<gcd<<endl;
	
}
