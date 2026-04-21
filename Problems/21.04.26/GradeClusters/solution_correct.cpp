#include <vector>

std::vector<int> gradeClusters(const std::vector<int>& grades)
{
    std::vector<int> buckets(11, 0);

    for (int grade : grades)
    {
        ++buckets[grade / 10];
    }

    return buckets;
}
