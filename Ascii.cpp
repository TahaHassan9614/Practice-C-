#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c;
	char as;
	
	cout<<"Enter Character"<<endl;
	cin>>a;
	
	as=a;
	
	if(as>=65 && as<=90)
	{
		cout<<"You have enter capital alphabet"<<endl;
		cout<<"The ASCII code of "<<as<< " is: "<<int(as);
	}
	
	else if(as>=97 && as<=122)
	{
		cout<<"You have enter small alphabet"<<endl;
		cout<<"The ASCII code of "<<as<< " is: "<<int(as);
	}
	
	else if(as>=0 && as<=47 || as>=58 && as<=64 || as>=91 && as<=96 || as>=123 && as<=127 )
	{
		cout<<"You have enter special character"<<endl;
		cout<<"The ASCII code of "<<as<< " is: "<<int(as);
	}
}
