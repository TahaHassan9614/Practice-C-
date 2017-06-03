#include<fstream>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	
	string mystr;
	float price=0;
	int quantity=0;
	
	cout<<"Enter price"<<endl;
	getline (cin, mystr);
	stringstream(mystr)>>price;
	
	cout<<"Enter quantity"<<endl;
	getline (cin, mystr);
	
	stringstream(mystr)>>quantity;
	
	cout<<"Total price"<<price*quantity<<endl;
	
	
	
}
