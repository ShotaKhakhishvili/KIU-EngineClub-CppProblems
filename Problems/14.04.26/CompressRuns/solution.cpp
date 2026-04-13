/*
    compressRuns

    Given a vector of integers, compress consecutive equal values
    into pairs of (value, count).

    Return a vector of pairs:
        {value, count_of_consecutive_occurrences}

    Rules:

    1) Traverse the vector from left to right
    2) Count consecutive equal elements
    3) Store each group as:
           {value, count}
    4) Preserve order
    5) If input is empty → return empty vector

    Example:
        Input:  {1,1,1,2,2,3,1,1}
        Output: {{1,3}, {2,2}, {3,1}, {1,2}}

    Constraints:
        - O(n)
        - Use std::vector
*/

#include <vector>
#include <utility>

std::vector<std::pair<int,int>> compressRuns(const std::vector<int>& input)
{
    return std::vector<std::pair<int,int>>();
}