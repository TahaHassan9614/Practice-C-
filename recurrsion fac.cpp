#include<iostream>
using namespace std;

int recursive_function(int n){
    static int i=1;
 

    if(n==1){
      return 1;
       }
   else{
        i++;
        return  n=n*recursive_function(n-1);
        }
}

int main(){

    cout<<"Enter to number to find Factorial: ";
    int num;
    cin>>num;
    num=recursive_function(num); 
    cout<<"Factorial of number is: "<<num;
    
return 0;
}
