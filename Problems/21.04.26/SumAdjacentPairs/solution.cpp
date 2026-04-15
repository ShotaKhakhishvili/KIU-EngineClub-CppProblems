/*
sumAdjacentPairs

Given a vector of integers, return a new vector where each element is the sum
of one adjacent pair from the input.

Rules:
1) Traverse the vector from left to right
2) Add elements in pairs: input[0] + input[1], input[2] + input[3], and so on
3) If the vector has an odd number of elements, keep the last element as-is
4) Preserve the order of the produced values
5) If input is empty -> return an empty vector

Examples:
Input:  {1, 2, 3, 4, 5}
Output: {3, 7, 5}

Input:  {10, 20, 30, 40}
Output: {30, 70}

Constraints:
- O(n)
- Use std::vector
*/

#include <vector>

std::vector<int> sumAdjacentPairs(const std::vector<int>& input)
{
    return std::vector<int>();
}
