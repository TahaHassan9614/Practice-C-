#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main()
{
	ifstream infile("file1.txt");
	string line;
	
	while(!infile.eof())
	{
		getline(infile, line);
		cout<<line<<endl;
	}
	
	infile.close();
}
