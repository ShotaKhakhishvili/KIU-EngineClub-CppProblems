/*
columnSums

Given a pointer to a 2D int array with 4 columns and a row count,
compute the sum of each column and store the results in a 4-element
output array.

This problem is based on C++ Primer 3.6:
multidimensional arrays, pointers to arrays, subscripting, and
iterating over rows and columns using nested loops.

Rules:

1) The first parameter must be declared as a pointer to an array of 4 ints:
       const int (*matrix)[4]
2) Do not use std::vector or std::array.
3) Do not create any additional arrays inside the function.
4) sums must hold exactly 4 values: sums[j] = sum of all matrix[i][j].
5) If matrix is nullptr, set all 4 entries of sums to 0.
6) If rows <= 0, set all 4 entries of sums to 0.
7) sums is guaranteed to point to a valid array of 4 ints.

Example:

Input matrix (3 rows x 4 cols):
  { {1,  2,  3,  4},
    {5,  6,  7,  8},
    {9, 10, 11, 12} }

Call:
  columnSums(matrix, 3, sums);

Resulting sums:
  {15, 18, 21, 24}
  (1+5+9, 2+6+10, 3+7+11, 4+8+12)

Expected complexity:

O(rows * 4)
*/

void columnSums(const int (*matrix)[4], int rows, int* sums)
{
}