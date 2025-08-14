//YashRastogi exp-8
//24070123135
#include <iostream>
using namespace std;
int main(){
    int m,n,x,y;
    cout<<"Enter the number of rows for matrix 1:";
    cin>>m;
    cout<<"Enter the number of columns for matrix 1:";
    cin>>n;
    int mat[m][n];
    cout<<"Enter the number of rows for matrix 2:";
    cin>>x;
    cout<<"Enter the number of columns for matrix 2:";
    cin>>y;
    int mat2[x][y];
    if(n==x){
        cout<<"The matrices can be multiplied"<<endl;
    }else{
        cout<<"The matrices cannot be multiplied"<<endl;
        return 0;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the elements of the matrix 1:";
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<"Enter the elements of the matrix 2:";
            cin>>mat2[i][j];
        }
    }
    int mat3[m][y];
    for(int i=0;i<m;i++){
        for(int j=0;j<y;j++){
            mat3[i][j]=0;
            for(int k=0;k<n;k++){
                mat3[i][j]+=mat[i][k]*mat2[k][j];
            }
        }
    }
    cout<<"The matrix 1 is:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The matrix 2 is:"<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The Final matrix is:"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<y;j++){
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }
}
/*
Output: 
Enter the number of rows for matrix 1:3
Enter the number of columns for matrix 1:3
Enter the number of rows for matrix 2:3
Enter the number of columns for matrix 2:3
The matrices can be multiplied
Enter the elements of the matrix 1:1
Enter the elements of the matrix 1:2
Enter the elements of the matrix 1:3
Enter the elements of the matrix 1:4
Enter the elements of the matrix 1:5
Enter the elements of the matrix 1:6
Enter the elements of the matrix 1:7
Enter the elements of the matrix 1:8
Enter the elements of the matrix 1:9
Enter the elements of the matrix 2:10
Enter the elements of the matrix 2:11
Enter the elements of the matrix 2:12
Enter the elements of the matrix 2:13
Enter the elements of the matrix 2:14
Enter the elements of the matrix 2:15
Enter the elements of the matrix 2:16
Enter the elements of the matrix 2:17
Enter the elements of the matrix 2:18
The matrix 1 is:
1 2 3
4 5 6
7 8 9
The matrix 2 is:
10 11 12
13 14 15
16 17 18
The Final matrix is:
84 90 96
201 216 231
318 342 366
*/