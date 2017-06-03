#include<fstream>
#include<iostream>
#include<string>
using namespace std;


int main()
{
	ifstream Infile("file.txt");
	string line;
	
	while(! Infile.eof())
	{
		getline(Infile, line);
		cout<<endl;
		cout<<line;
	}
	
	Infile.close();
	
	
	
	
	
	
	
}
