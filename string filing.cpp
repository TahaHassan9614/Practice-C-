#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main()
{
	int a,b,c,len;
	fstream outfile;
	string str1,str2,s3,str,stt,st;
	str1=" This program is to test several string function";
	str2=" Testing ";
	
	s3=str2+str1;

	

	
	len = s3.size();  //Size of string s3 
		
	stt=s3.replace(47,8,str2);
	
	
	
	
	
	st=s3.insert(27,str2);
	
	
	
	outfile.open("sf.txt");
	
	outfile<<"str3 = :"<<s3; 			//Concetination
	
	outfile<<"\n";
		
	outfile<<len<<endl;
	outfile<<"\n";
	outfile<<stt;
	outfile<<"\n";
	outfile<<st;
	
	outfile.close();
	
	
	
}
