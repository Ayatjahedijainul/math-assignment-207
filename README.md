# math-assignment-207


**subtask1A**

# Matrix Transpose Program

## Description
This C++ program takes as input a rectangular matrix of dimensions M x N and computes its transpose. The transpose of a matrix is formed by swapping rows and columns, resulting in an N x M matrix. The program reads matrix elements from the user, performs the transpose operation, and then displays the transposed matrix.

## What This Program Does
- Takes input for the number of rows (M) and columns (N).
- Reads the elements of the original M x N matrix (Matrix A).
- Creates the transpose matrix (Matrix B) of size N x M by swapping rows and columns.
- Prints the transposed matrix in matrix format.

## Example
Enter the numbers of Row : 2
Enter the numbers of Column : 3
Enter Elements of rectangular matrix A :
1 2 3
4 5 6
Transpose of matrix A is matrix B:
1 4
2 5
3 6


**subtask1B**


# Square Matrix Transpose Program

## Description
This C++ program takes a square matrix as input and computes its transpose in place. The transpose operation swaps elements symmetrically around the main diagonal, turning rows into columns without requiring extra memory for another matrix.

## Features
- Inputs the size of the square matrix (number of rows and columns).
- Reads matrix elements from the user.
- Performs an in-place transpose by swapping elements above the diagonal with their counterparts below the diagonal.
- Outputs the transposed matrix in a readable format.

## Example
Enter the numbers of Row :3
Enter the numbers of column :3
Enter the Elements of square matrix :
1 2 3
4 5 6
7 8 9
Transpose of a square matrix:
1 4 7
2 5 8
3 6 9


**TASK-2**


# Symmetric Matrix Check Program

## Description
This C++ program checks if a given square matrix is symmetric. A matrix is symmetric if it is equal to its transpose, meaning the element at position [i][j] is the same as at [j][i] for all indices.

## Features
- Takes input for the size of the square matrix.
- Reads matrix elements from the user.
- Checks whether the matrix is symmetric by comparing elements across the main diagonal.
- Outputs the result indicating whether the matrix is symmetric or not.
3. Enter the matrix size and elements as prompted.

## Example
Enter the size of square matrix :3
Enter elements of matrix A :
1 2 3
2 5 6
3 6 9
The matrix is symmetric.



**TASK-3**

# Skew-Symmetric Matrix Check Program

## Description
This C++ program checks whether a given square matrix is skew-symmetric. A matrix is skew-symmetric if it is equal to the negative of its transpose. This means:
- For every element \(a_{ij}\), \(a_{ij} = -a_{ji}\).
- All diagonal elements must be zero.

## Features
- Takes input for the size of the square matrix.
- Reads matrix elements from the user.
- Checks the skew-symmetric property by verifying every element against its negative transpose counterpart.
- Ensures all diagonal elements are zero.
- Outputs whether the matrix is skew-symmetric.

## Example
Enter the size of square matrix :3
Enter the elements of matrix :
0 2 -3
-2 0 4
3 -4 0
The matrix is SkewSymmetric.


**TASK-4 multi**


# Matrix Multiplication Program

## Description
This C++ program multiplies two matrices. It checks whether the number of columns of the first matrix matches the number of rows of the second matrix, which is a prerequisite for matrix multiplication. If valid, it performs the multiplication and outputs the resulting matrix.

## Features
- Accepts dimensions of two matrices from the user.
- Validates matrix dimension compatibility for multiplication.
- Reads matrix elements from user input.
- Calculates the product matrix using nested loops.
- Displays the resulting matrix in matrix format.

## Example
Enter rows and columns of first matrix: 2 3
Enter rows and columns of second matrix: 3 2
Enter Elements for 1st Matrix :
1 2 3
4 5 6
Enter Elements for 2nd Matrix :
7 8
9 10
11 12
Multiplication of 1st & 2nd Matrix :
58 64
139 154




**TASK-4**



# Matrix Addition and Subtraction Program

## Description
This C++ program performs addition and subtraction on two matrices of the same dimensions. It takes input for the sizes and elements of two matrices, then outputs their sum and difference.

## Features
- Inputs number of rows and columns for two matrices.
- Validates if both matrices have the same dimensions for addition and subtraction.
- Accepts elements for both matrices from the user.
- Computes sum and difference matrices element-wise.
- Outputs the resulting matrices in a matrix format.

## Example
Enter rows and columns of first matrix: 2 3
Enter rows and columns of second matrix: 2 3
Enter elements for first matrix :
1 2 3
4 5 6
Enter elements for second matrix :
7 8 9
0 1 2
Addition of matrixs :
8 10 12
4 6 8
Subtraction of matrixs :
-6 -6 -6
4 4 4

























