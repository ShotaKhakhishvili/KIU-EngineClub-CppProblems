#include "solution.cpp"

#ifndef PROBLEM_NAME
#define PROBLEM_NAME "Window Maximums"
#endif

#include "../../../test.h"
#include <vector>

using namespace Test;

void TestSolution()
{
    AssertEqual(std::vector<int>({3,3,5,5,6,7}),
                windowMaximums({1,3,-1,-3,5,3,6,7}, 3));

    AssertEqual(std::vector<int>({1}),
                windowMaximums({1}, 1));

    AssertEqual(std::vector<int>({9,8,7}),
                windowMaximums({9,8,7}, 1));

    AssertEqual(std::vector<int>({4}),
                windowMaximums({4,1,2,3}, 4));

    AssertEqual(std::vector<int>({2,2,2}),
                windowMaximums({2,2,2,2}, 2));

    AssertEqual(std::vector<int>({-1,-1,-2}),
                windowMaximums({-4,-1,-3,-2}, 2));

    AssertEqual(std::vector<int>({}),
                windowMaximums({}, 3));

    AssertEqual(std::vector<int>({}),
                windowMaximums({1,2,3}, 0));

    AssertEqual(std::vector<int>({}),
                windowMaximums({1,2,3}, -1));

    AssertEqual(std::vector<int>({}),
                windowMaximums({1,2,3}, 5));

    AssertEqual(std::vector<int>({5,5,5,5}),
                windowMaximums({1,5,2,5,3,4}, 3));

    AssertEqual(std::vector<int>({10,9,9,9}),
                windowMaximums({10,1,0,9,2,1}, 3));
}