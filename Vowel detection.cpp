#include<iostream>
using namespace std;
int main()
{
	int a,b,c,check;
	int valueat=0;
	int index=0;
	char arr[100];
	
	cout<<"Enter a line for vowel detection"<<endl;
	cin.getline(arr,100);
	
	
	while (arr[100]!=0)
	{
		switch(arr[100])
		{
			case 'a':
			check=1;
			
			case 'e':
			check=1;
			
			case 'i':
			check=1;
			
			case 'o':
			check=1;
			
			case 'u':
			check=1;
			
			
			
			if(check==1)
			{
				cout<<"Vowel"<<arr[100];//<<" found at number"<< valueat<<endl;
			}
			
			check=0;
		}
			valueat++;
			index++;
		
	}
}
