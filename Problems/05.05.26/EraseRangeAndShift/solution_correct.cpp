#include <vector>

std::vector<int> eraseRangeAndShift(const std::vector<int>& values, int left, int right)

{

 if (values.empty())

  return std::vector<int>();

 int n = static_cast<int>(values.size());

 if (left < 0)

  left = 0;

 if (right >= n)

  right = n - 1;

 if (left > right)

  return values;

 std::vector<int> result;

 result.reserve(values.size());

 for (int i = 0; i < n; ++i)

 {

  if (i < left || i > right)

   result.push_back(values[i]);

 }

 return result;

}
