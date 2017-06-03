#include<fstream>
#include<iostream>
using namespace std;

struct book
{
	
	float price;
	string title;
	string author;
};


int main()
{
	book b[5];
	fstream outfile;
	
	cout<<"Enter book name, author and price"<<endl;
	for(int i=0;i<=2;i++)
	{
		cin>>b[i].title>>b[i].author>>b[i].price;
	}
	
	
	outfile.open("file.txt", ios::app);
	{
	for(int i=0;i<=2;i++)
	{
		outfile<<b[i].title<<endl;
		outfile<<b[i].author<<endl;
		outfile<<b[i].price<<endl;
	}
	}
	
	outfile.close();
	
}
