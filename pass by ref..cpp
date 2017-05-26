#include<iostream>
using namespace std;
void pbr(int *);
int main()
{
	int num;
	
	cout<<"Enter number"<<endl;
	cin>>num;
	
	pbr(& num);
	cout<<"Result "<<num<<endl;
	
	
	return 0;
}

void pbr(int *iptr)
{
	*iptr=*iptr * *iptr;
}
