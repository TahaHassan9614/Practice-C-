#include<iostream>
using namespace std;
int main()
{
	int choice;
	for(int i=0;i<=3;i++)
	{
	cin>>choice;
	
	if(choice==1)
	{
		cout<<"Tea"<<endl;
	}
	else if(choice==2)
	{
		cout<<"Tea with bread"<<endl;
	}
	else if(choice==3)
	{
		cout<<"Tea with omelet"<<endl;
	}
	else if(choice==4)
	{
		cout<<"coffee with toast"<<endl;
	}
	else if(choice==5)
	{
		cout<<"juice with egg and butter "<<endl;
	}
	else if(choice==6)
	{
		cout<<"Egg with parhata"<<endl;
	}
	else
	{
		cout<<"Butter with bread"<<endl;
	}
}
	return 0;
}
