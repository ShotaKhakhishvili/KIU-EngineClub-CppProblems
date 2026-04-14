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
    std::vector<std::pair<int,int>>() result;

    if(input.empty()) return result; //for case 3, to handle overflow for empty vector

    //we initialize pair (current, count) as 1st element of input and its least amount (which is 1)
    int current = input[0]; 
    int count = 1;         


// Input:  {1,1,1,2,2,3,1,1}
// Output: {{1,3}, {2,2}, {3,1}, {1,2}}

    for (int i = 1; i < input.size(); ++i) {
	// foreach element in the vector, if the element is same as previous, it increases
        if (input[i] == current) {	
            count++;
        } else {
	// else, it adds pair of previous  element and its count, and current element becomes a new one, which already exists once at least
            result.emplace_back(current, count);
            current= input[i];
            count = 1;
        }
    }
    //last element
    result.emplace_back(current, count);

    return result;
}