#include<iostream>
#include<cstring>
using namespace std;

	struct student
	{
		int ID;
		string name;
		string department;
		string Email;
		int phone_no;
	};

int main()
{
	student s;
	
	cout<<"Enter Details of students"<<endl;
	
	cout<<"Enter ID"<<endl;
	cin>>s.ID;
	
	cout<<"Enter name"<<endl;
	getline(cin,s.name);
	
	cout<<"Enter Department name"<<endl;
	cin>>s.department;
	
	cout<<"Enter Email address"<<endl;
	getline(cin,s.name);
	
	cout<<"Enter phone number"<<endl;
	cin>>s.phone_no;
	
	cout<<"\n";
	cout<<"\n";
	cout<<"Showing Detail of student";		
	cout<<"ID number = "<<s.ID<<endl;
	cout<<"Name of student is = "<<s.name<<endl;
	cout<<"Department is  = "<<s.department<<endl;
	cout<<"Email Address = "<<s.Email<<endl;
	cout<<"Phone number = "<<s.phone_no<<endl;
	
	
	}
	
	
	
