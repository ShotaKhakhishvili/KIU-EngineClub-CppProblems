/*
windowMaximums

Given a vector of integers and an integer k, return a vector containing
the maximum value of every contiguous subarray (window) of size k.

Rules:
1) Each output element corresponds to one window of size k
2) The first output is the maximum of input[0..k-1]
3) The second output is the maximum of input[1..k]
4) Continue until the last valid window
5) If k <= 0, k > input.size(), or input is empty -> return empty vector

Example:
Input: {1,3,-1,-3,5,3,6,7}, k = 3
Windows:
{1,3,-1} -> 3
{3,-1,-3} -> 3
{-1,-3,5} -> 5
{-3,5,3} -> 5
{5,3,6} -> 6
{3,6,7} -> 7
Output: {3,3,5,5,6,7}

Constraints:
- O(n) expected
- Use std::vector
*/

#include <vector>

std::vector<int> windowMaximums(const std::vector<int>& input, int k)
{
    std::vector<int> windowMaximums;

    if (k > 0 && input.size() >= k){
        for (auto i = input.begin(); i != input.end(); i++){
            auto max = i;

            if (input.end() - k < i){
                break;
            }
            for (auto j = i+1; j < i + k; j++){
                if (*j > *max){
                    max = j;
                }
            }
            windowMaximums.push_back(*max);
        }
    }

    return windowMaximums;
}