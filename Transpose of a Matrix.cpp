//YashRastogi exp-8
//24070123135
#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows for matrix:";
    cin>>m;
    cout<<"Enter the number of columns for matrix:";
    cin>>n;
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the elements of the matrix 1:";
            cin>>mat[i][j];
        }
    }
    cout<<"The matrix is:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    int mat3[n][m];
    cout<<"The Final matrix is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mat3[i][j]=mat[j][i];
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }
}
/*
Output: 
Enter the number of rows for matrix:3
Enter the number of columns for matrix:3
Enter the elements of the matrix 1:1
Enter the elements of the matrix 1:2
Enter the elements of the matrix 1:3
Enter the elements of the matrix 1:4
Enter the elements of the matrix 1:5
Enter the elements of the matrix 1:6
Enter the elements of the matrix 1:7
Enter the elements of the matrix 1:8
Enter the elements of the matrix 1:9
The matrix is:
1 2 3 
4 5 6 
7 8 9 
The Final matrix is:
1 4 7 
2 5 8 
3 6 9 
*/