#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main()
{
	fstream outfile;
	
	outfile.open("file.txt");
	
	outfile<<"My name is Taha Hassan "<<endl;
	
	outfile.close();
}

