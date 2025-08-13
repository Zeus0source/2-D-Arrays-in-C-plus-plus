//YashRastogi exp-8
//24070123135
#include <iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<"Enter the number of columns: ";
    cin>>n;
    int mat[m][n];
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter the elements of the matrix: ";
            cin>>mat[i][j];
        }
    }
    for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
          cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    

}
/*
Output:
Enter the number of rows: 4 
Enter the number of columns: 4
Enter the elements of the matrix: 1
Enter the elements of the matrix: 2
Enter the elements of the matrix: 3
Enter the elements of the matrix: 4
Enter the elements of the matrix: 5
Enter the elements of the matrix: 6
Enter the elements of the matrix: 7
Enter the elements of the matrix: 8
Enter the elements of the matrix: 9
Enter the elements of the matrix: 10
Enter the elements of the matrix: 11
Enter the elements of the matrix: 12
Enter the elements of the matrix: 13
Enter the elements of the matrix: 14
Enter the elements of the matrix: 15
Enter the elements of the matrix: 16
1 2 3 4 
5 6 7 8
9 10 11 12
13 14 15 16
*/