/*
eraseRangeAndShift

Given a vector of integers and two indexes: left and right.

Remove every element from index left to index right, inclusive.
Then shift the remaining elements left, preserving their original order.

Return the new vector.

Rules:
1) Indexes are 0-based
2) If the vector is empty, return an empty vector
3) If left < 0, treat it as 0
4) If right >= vector size, treat it as vector size - 1
5) If left > right after clamping, return the original vector unchanged
6) Do not sort the vector
7) Do not change the order of the remaining elements

Example:

Input:
values = {10, 20, 30, 40, 50}
left = 1
right = 3

Output:
{10, 50}

Expected complexity:
O(n)
*/

#include <vector>

std::vector<int> eraseRangeAndShift(const std::vector<int>& values, int left, int right)

{

 return std::vector<int>();

}
