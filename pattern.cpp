#include<iostream>
using namespace std;
int main()
{
    int row,col,i,j,n1,k;
    //printing solid square
    cout<<"enter rows\n";
    cin>>row;
    //cout<<"Enter cols\n";
   // cin>>col;
    //apply condition for 0 inputs
    //if((row==0 || row<0) && (col==0 || col<0))
   // {
   //     return 0;
   // }
    //loop to iterate each row
    //for(i=0;i<row;i++)
    //{
        //loop to perform action on each iteration
   //     for(j=0;j<col;j++)
   //     {
   //         cout<<"* ";
   ///     }
   //     cout<<endl;

   // }

   //PRINTING THE HALF PYRAMID
   //structure like this 
   //    *
   //    * *
   //    * * *
   //    * * * *
   //iterating the rows
  // for(i=0;i<row;i++){
    //iterating the columns
   // for(j=0;j<i+1;j++){
   //     cout<<"* ";

  //  }
   // cout<<endl;
   //}



   //PRINTING THE HALF INVERTED PYRAMID.
   
   // iterating rows
  // for(i=0;i<row;i++){
    //iterating cols
   // for(j=0;j<row-i;j++){
      //  cout<<"* ";
   // }
   // cout<<endl;

   //}

   //PRINTING THE NUMERIC PYRAMID

   //iterating the rows
    int n;
    cin >> n;
    for(int row=0; row<n; row=row+1) {
        for(int col=0; col<n-row; col = col+1) {
            cout << col+1 ;
        }
        cout << endl;
    }



}