#include <vector>

std::vector<int> sumAdjacentPairs(const std::vector<int>& input)
{
    std::vector<int> result;

    for (std::size_t i = 0; i < input.size(); i += 2)
    {
        if (i + 1 < input.size())
            result.push_back(input[i] + input[i + 1]);
        else
            result.push_back(input[i]);
    }

    return result;
}
