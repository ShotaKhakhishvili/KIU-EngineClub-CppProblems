/*
flattenMatrix

Given a pointer to a 2D int array with 4 columns, a row count,
and a pointer to a 1D output array, copy all elements of the matrix
into the output array in row-major order (row 0 first, then row 1, etc.).

This problem is based on C++ Primer 3.6:
multidimensional arrays, pointers to arrays, and row-major layout.

Rules:

1) The first parameter must be declared as a pointer to an array of 4 ints:
       const int (*matrix)[4]
2) Do not use std::vector or std::array.
3) Do not create any additional arrays inside the function.
4) Copy every element: output must contain rows * 4 values total.
5) If matrix is nullptr, do nothing.
6) If rows <= 0, do nothing.
7) output is guaranteed to have enough space (rows * 4 ints).
8) Preserve row-major order: output[i * 4 + j] == matrix[i][j].

Example:

Input matrix (3 rows x 4 cols):
  { {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12} }

Call:
  flattenMatrix(matrix, 3, output);

Resulting output:
  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}

Expected complexity:

O(rows * 4)
*/

void flattenMatrix(const int (*matrix)[4], int rows, int* output)
{
}