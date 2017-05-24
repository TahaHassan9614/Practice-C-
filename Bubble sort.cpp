#include<iostream>
using namespace std;

int main(){
     
      int array[5];
      cout<<"Enter 5 numbers randomly : "<<endl;
      for(int i=0; i<5; i++)
      {
       
       cin>>array[i];        
      }  
      cout<<endl; 
      cout<<"Input array is: "<<endl;
      
      for(int j=0; j<5; j++)
      {
        
       cout<<"Value at "<<j<<" Index: "<<array[j]<<endl;         
      }   
      cout<<endl;
    
     int temp;
     for(int i2=0; i2<=4; i2++)
   {
     for(int j=0; j<4; j++)
     {
           
           if(array[j]>array[j+1])
       {
        temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;        
       }
     }         
   } 
      cout<<"  Sorted Array is: "<<endl;
     for(int i3=0; i3<5; i3++)
   {
    cout<<"Value at "<<i3<<" Index: "<<array[i3]<<endl;  
   }   
return 0;
}
