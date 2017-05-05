#include<iostream>
using namespace std;






int main() 
{
    const int SIZE = 100;
    char stringObj[SIZE];
    int index= 0;
    int valueAt = 0;
    int check = 0;

    cout<<"Enter a String to find vowel:   ";
    cin.getline(stringObj,100);
    while(stringObj[index] !='\0')
    {
        switch(stringObj[index])
        {
          case 'a':
              check = 1;

          case 'e':
              check = 1;

          case 'i':
              check = 1;

          case 'o':
              check = 1;

          case 'u':
              check = 1;

          if(check == 1) {
          cout<<"Vowel "<<stringObj[index]<<" found at index number "<<valueAt<<endl;
          }

        check = 0;

        }
    valueAt++;
    index++;
    }

    return 0;
}
