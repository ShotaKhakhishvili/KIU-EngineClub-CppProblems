#include <vector>
#include <utility>

std::vector<std::pair<int,int>> compressRuns(const std::vector<int>& input)
{
    std::vector<std::pair<int,int>> result;

    if (input.empty())
        return result;

    int current = input[0];
    int count = 1;

    for (size_t i = 1; i < input.size(); ++i)
    {
        if (input[i] == current)
        {
            count++;
        }
        else
        {
            result.push_back({current, count});
            current = input[i];
            count = 1;
        }
    }

    // last group
    result.push_back({current, count});

    return result;
}