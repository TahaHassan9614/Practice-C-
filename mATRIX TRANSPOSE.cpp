#include<iostream>
    using namespace std;
    int main()
    {

    int matrix[5][5],transpose_matrix[5][5];
    int i,j,rows,cols;
   

      cout<<"Enter Number of ROWS :";
      cin>>rows;

      cout<<"Enter Number Of COLS  :";
      cin>>cols;
       for( i=0;i<rows;i++){
           for( j=0;j<cols;j++)
           {
               cin>>matrix[i][j];
           }
          }

          cout<<"\n Matrix You Entered\n";

       for( i=0;i<rows;i++){
           for( j=0;j<cols;j++)
           {
               cout<<matrix[i][j]<<"     ";
           }
           cout<<endl;
          }




    cout<<"\n\n\nTranspose of Entered Matrix\n";
       for( i=0;i<rows;i++){
           for( j=0;j<cols;j++)
           {
               transpose_matrix[j][i]=matrix[i][j];
           }
           cout<<endl;
          }


       for( i=0;i<cols;i++){
           for( j=0;j<rows;j++)
           {
               cout<<transpose_matrix[i][j]<<"    ";
           }
           cout<<endl;
          }

   return 0;
    }
