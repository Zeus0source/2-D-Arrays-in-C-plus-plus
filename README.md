# Aim: To study and implement C++ 2D Array - Matrices
# Software Required :
Visual Studio
# Theory:

A multi-dimensional array can be defined as an array that has more than one dimension. Having more than one dimension means that it can grow in multiple directions. Some popular multidimensional arrays include 2D arrays which grows in two dimensions, and 3D arrays which grows in three dimensions.

2D Array:

A two-dimensional array in C++ is a collection of elements organized the form of rows and columns. It can be visualized as a table or a grid.

<img width="800" height="400" alt="Screenshot 2025-08-14 133726" src="https://github.com/user-attachments/assets/c7bd3fcf-b7af-4fab-9d45-977de7e00305" />

Like 1D arrays, 2D arrays can also be initialized using a list of values enclosed inside {} curly brackets, but as 2D arrays have two dimensions, the list is nested inside another list to initialize each dimension one by one. It means that each row values are nested inside one big list.

# Implementation:
In this programs the usage of 2D arrays was implemented using several codes which are,
+ Displaying A matrix
+ Addition of Matrix
+ Multiplication of Matrices
+ Diagonal Addition of Matrix
+ Trnaspose of a Matrix

# Algorithms:

Matrix Multiplication:

1. Start
2. Declare integer variables `m`, `n` for rows and columns of Matrix 1.
3. Display "Enter the number of rows for matrix 1:" and read `m`.
4. Display "Enter the number of columns for matrix 1:" and read `n`.
5. Declare a 2D array `mat[m][n]`.
6. Declare integer variables `x`, `y` for rows and columns of Matrix 2.
7. Display "Enter the number of rows for matrix 2:" and read `x`.
8. Display "Enter the number of columns for matrix 2:" and read `y`.
9. Declare a 2D array `mat2[x][y]`.
10. If `n != x`:

    Display "The matrices cannot be multiplied".
         Stop.
11. Else:

     Display "The matrices can be multiplied".
12. Input elements of Matrix 1 in `mat`.
13. Input elements of Matrix 2 in `mat2`.
14. Declare a 2D array `mat3[m][y]` and initialize all elements to `0`.
15. For each `i` in range `0` to `m-1`:

     For each `j` in range `0` to `y-1`:

       For each `k` in range `0` to `n-1`:

         `mat3[i][j] += mat[i][k] * mat2[k][j]`.
16. Display Matrix 1.
17. Display Matrix 2.
18. Display the Resultant Matrix (`mat3`).
19. End

Sum of Diagonal Elements in a Square Matrix

1. Start
2. Declare integer variables `m`, `n`.
3. Display "Enter the number of rows for matrix:" and read `m`.
4. Display "Enter the number of columns for matrix:" and read `n`.
5. If `m != n`:

   Display "The matrix is not square, diagonal addition is not possible".
     Stop.
6. Declare a 2D array `mat[m][n]`.
7. Display "Enter the elements of the matrix:".
8. For `i` from `0` to `m-1`:

   For `j` from `0` to `n-1`:

      Read `mat[i][j]`.
9. Display "The matrix is:" followed by all elements in matrix form.
10. Initialize `diagsum = 0`.
11. For `i` from `0` to `n-1`:

     Add `mat[i][i]` to `diagsum`.
12. Display "Sum of diagonal:" followed by `diagsum`
13. End

# Conclusion:
The implementation of 2D arrays was done using the above codes.
