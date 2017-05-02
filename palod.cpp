#include <iostream>

using namespace std;

int main()
{
    int palindrome,num,reverse;

    cout<<"Enter number"<<endl;
    cin>>palindrome;

    for(int i=0;palindrome!=0;i++)
    {
        num=palindrome%10;
        palindrome=palindrome%10;
        reverse=num+(reverse*10);
    }

    if(reverse==0)
    {

        cout<<palindrome<<" Is palindrome number"<<endl;

    }
    else
    {

        cout<<palindrome<<"Is not a palindrome no."<<endl;
    }

    return 0;
}

