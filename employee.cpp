#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;



struct employee
{
	int employee_no;
	string name;
	float basic_sal;
	float house_all;
	float tax;
	float med_all;
	float gross_pay;
	float net_sal;
		
};

int main()
{
	employee e;
	
	cout<<"Enter Employee number"<<endl;
	cin>>e.employee_no;
	
	cout<<"Enter name of employee"<<endl;
	cin>>e.name;	
	
	cout<<"Enter Basic Salary of employee"<<endl;
	cin>>e.basic_sal;
	
	
	
	e.house_all=e.basic_sal/100*10;
	e.med_all=e.basic_sal/100*5;
	e.tax=e.basic_sal/100*4;
	e.gross_pay=e.basic_sal+e.house_all+e.med_all;
	e.net_sal=e.gross_pay-e.tax;
	
	
	cout<<"*******************************************************"<<endl;
	cout<<"             Employee Salary Detail          "<<endl;
	cout<<"*******************************************************"<<endl;
	
	
	
	cout<<"Employee no.  : "<<e.employee_no<<endl;
	cout<<"Employee name : "<<e.name<<endl;
	cout<<"Basic Salary  : "<<e.basic_sal<<endl;
	cout<<"House Allowance: "<<e.house_all<<endl;
	cout<<"Medical Allowance: "<<e.med_all<<endl;
	cout<<"TAX : "<<e.tax<<endl;
	cout<<"Gross Payment : "<<e.gross_pay<<endl;
	cout<<"Net salary "<<e.net_sal<<endl;
	
}



