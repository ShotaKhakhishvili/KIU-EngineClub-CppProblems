#include "solution.cpp"

#ifndef PROBLEM_NAME
#define PROBLEM_NAME "Sum Adjacent Pairs"
#endif

#include "../../../test.h"
#include <vector>

using namespace Test;

void TestSolution()
{
    AssertEqual(std::vector<int>({3, 7, 5}), sumAdjacentPairs({1, 2, 3, 4, 5}));
    AssertEqual(std::vector<int>({30, 70}), sumAdjacentPairs({10, 20, 30, 40}));
    AssertEqual(std::vector<int>({42}), sumAdjacentPairs({42}));
    AssertEqual(std::vector<int>({}), sumAdjacentPairs({}));
    AssertEqual(std::vector<int>({0, 0}), sumAdjacentPairs({-1, 1, -2, 2}));
    AssertEqual(std::vector<int>({11, 15, 9}), sumAdjacentPairs({5, 6, 7, 8, 9}));
    AssertEqual(std::vector<int>({2, 4, 6}), sumAdjacentPairs({1, 1, 2, 2, 3, 3}));
}
