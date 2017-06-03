#include<fstream>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	stringstream ss;
	
	ss <<100 <<' '<< 200;
	
	int foo,boo;
	ss>>foo >>boo;
	
	cout<<"foo:"<<foo<<endl;
	cout<<"boo:"<<boo<<endl;
}
