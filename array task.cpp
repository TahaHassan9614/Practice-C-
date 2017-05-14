 
#include<iostream>
using namespace std;



void REVERSE(int *); 


int main()
{
    int text[10] = {1,2,3,4,5,6,7,8,9};
    REVERSE(text);
    
   

    return 0;
}


void REVERSE (int *A)
{
    int counter = 0;
    while(A[counter] != '\0')
        counter++;
    for(int i=counter-1;i>=0;i--)
        cout<<A[i];
    cout<<endl;
}
