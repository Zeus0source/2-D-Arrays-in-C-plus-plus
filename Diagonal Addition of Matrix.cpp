//YashRastogi exp-8
//24070123135
#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the number of rows for matrix :";
    cin>>m;
    cout<<"Enter the number of columns for matrix :";
    cin>>n;
    if(m!=n){
        cout<<"The matrix is not square, diagonal addition is not possible"<<endl;
        return 0;
    }   
    int mat[m][n];
    cout<<"Enter the elements of the matrix:"<<endl;
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
    int diagsum=0;
    for(int i=0;i<n;i++){
        diagsum+=mat[i][i];
    }
    cout<<"Sum of diagonal:"<<diagsum<<endl;
}
/*
Output1:
Enter the number of rows for matrix :2
Enter the number of columns for matrix :3
The matrix is not square, diagonal addition is not possible

Output2:
Enter the number of rows for matrix :3
Enter the number of columns for matrix :3
Enter the elements of the matrix:
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
Sum of diagonal:15

*/