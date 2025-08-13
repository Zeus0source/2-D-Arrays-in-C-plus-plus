//YashRastogi exp-8
//24070123135
#include <iostream>
using namespace std;

int main(){
    int m,n;
    int x,y;

    cout<<"Enter the number of rows for matrix 1: ";
    cin>>m;
    cout<<"Enter the number of columns for matrix 1: ";
    cin>>n;
    int mat[m][n];
    cout<<"Enter the number of rows for matrix 2: ";
    cin>>x;
    cout<<"Enter the number of columns for matrix 2: ";
    cin>>y;
    int mat2[x][y];
   if(m==x && n==y || m==y && n==x){
      cout<<"Array Addition is possible"<<endl;
   }
   else{
    cout<<"Array Addition is not possible"<<endl;
   }
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter the elements of the matrix 1: ";
            cin>>mat[i][j];
        }
    }
    for (int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cout<<"Enter the elements of the matrix 2: ";
            cin>>mat2[i][j];
        }
    }
    int mat3[0][0];
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
          int mat3[i][j]={mat[i][j]+mat2[i][j]};
          cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The matrix 1 is: "<<endl;
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
          cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The matrix 2 is: "<<endl;
    for (int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
          cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The Final matrix  is: "<<endl;
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
          cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }
}
/*
Output:

*/