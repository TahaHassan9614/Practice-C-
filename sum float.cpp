#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  float a=1.0;
  float b=2.0;
  float sum=1.0;
  float c=0.0;
  int num;
  
  cout<<"Enter number"<<endl;
  cin>>num;
  
  while(b<=num)
  {
  		c=a/b;
  		sum=sum+c;
  		b=b+2;
  }
  
  cout<<b<<endl;
  getch();
  return 0;
}
