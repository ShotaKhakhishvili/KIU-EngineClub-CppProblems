/*
reverseArrayWindow

Given a pointer to the first element of an int array, the array size,
and two indexes: left and right.

Reverse the elements from index left to index right IN PLACE.

This problem is based on C++ Primer 3.5.1 - 3.5.3:
built-in arrays, array subscripts, pointers to array elements, and pointer arithmetic.

Rules:

1) The parameter must be an int pointer.
2) Do not use std::vector.
3) Do not create another array.
4) Modify the original array directly.
5) Indexes are 0-based.
6) If values is nullptr, do nothing.
7) If size <= 0, do nothing.
8) If left < 0, treat it as 0.
9) If right >= size, treat it as size - 1.
10) If left > right after clamping, do nothing.
11) Do not sort the values.
12) Do not change values outside the selected range.

Example:

Input array:
{10, 20, 30, 40, 50}

Call:
reverseArrayWindow(values, 5, 1, 3);

Resulting array:
{10, 40, 30, 20, 50}

Expected complexity:

O(n)
*/

void reverseArrayWindow(int* values, int size, int left, int right)
{
}
