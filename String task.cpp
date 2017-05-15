#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int a,b,c,len;
	string str1,str2,s3,str,stt,st;
	str1=" This program is to test several string function";
	str2=" Testing ";
	
	s3=str2+str1;
	cout<<"str3 = :"<<s3; 			//Concetination
	
	cout<<"\n";
	
	len = s3.size();  //Size of string s3 
	cout<<len<<endl;
	
	stt=s3.replace(47,8,str2);
	
	cout<<stt;
	
	cout<<"\n";
	
	st=s3.insert(27,str2);
	cout<<st;
	
}
