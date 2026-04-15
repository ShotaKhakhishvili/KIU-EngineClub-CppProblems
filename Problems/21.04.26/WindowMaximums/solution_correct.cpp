#include <vector>
#include <deque>

std::vector<int> windowMaximums(const std::vector<int>& input, int k)
{
    std::vector<int> result;

    if (input.empty() || k <= 0 || k > static_cast<int>(input.size()))
        return result;

    std::deque<int> dq; // stores indices, values kept in decreasing order

    for (int i = 0; i < static_cast<int>(input.size()); ++i)
    {
        // Remove indices that are out of the current window
        while (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        // Remove smaller (or equal) values from the back
        while (!dq.empty() && input[dq.back()] <= input[i])
            dq.pop_back();

        dq.push_back(i);

        // Start recording answers once the first full window is formed
        if (i >= k - 1)
            result.push_back(input[dq.front()]);
    }

    return result;
}