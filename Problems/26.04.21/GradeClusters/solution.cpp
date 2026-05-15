/*

  gradeClusters

  Given a vector of integer grades in the range [0, 100],
  count how many grades fall into each cluster of 10.

  Return a vector<int> of size 11 where:

  index 0 -> grades 0..9
  index 1 -> grades 10..19
  index 2 -> grades 20..29
  index 3 -> grades 30..39
  index 4 -> grades 40..49
  index 5 -> grades 50..59
  index 6 -> grades 60..69
  index 7 -> grades 70..79
  index 8 -> grades 80..89
  index 9 -> grades 90..99
  index 10 -> grade 100 only

  Rules:

  1) Create exactly 11 buckets
  2) For each grade g, increment the correct bucket using index g / 10
  3) Grade 100 must go into bucket 10
  4) Preserve bucket order from 0..9 up to 100
  5) If input is empty -> return 11 zeros

  Example:

  Input:  {42, 65, 95, 100, 39, 67, 95, 76, 88, 76, 83, 92, 76, 93}
  Output: {0, 0, 0, 1, 1, 0, 2, 3, 2, 4, 1}

  Constraints:

  - O(n)
  - Use std::vector

*/

#include <vector>

std::vector<int> gradeClusters(const std::vector<int>& grades)
{
    return std::vector<int>();
}
