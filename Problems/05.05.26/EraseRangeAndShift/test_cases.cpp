#include "solution.cpp"

#ifndef PROBLEM_NAME

#define PROBLEM_NAME "Erase Range And Shift"

#endif
#include "../../../test.h"
#include <vector>

using namespace Test;

void TestSolution()

{

 AssertEqual(std::vector<int>({10,50}),

 eraseRangeAndShift({10,20,30,40,50}, 1, 3));

 AssertEqual(std::vector<int>({20,30,40,50}),

 eraseRangeAndShift({10,20,30,40,50}, 0, 0));

 AssertEqual(std::vector<int>({10,20,30,40}),

 eraseRangeAndShift({10,20,30,40,50}, 4, 4));

 AssertEqual(std::vector<int>({}),

 eraseRangeAndShift({10,20,30}, 0, 2));

 AssertEqual(std::vector<int>({}),

 eraseRangeAndShift({10,20,30}, -5, 100));

 AssertEqual(std::vector<int>({10,20,30}),

 eraseRangeAndShift({10,20,30}, 3, 1));

 AssertEqual(std::vector<int>({10,20,30}),

 eraseRangeAndShift({10,20,30}, 5, 10));

 AssertEqual(std::vector<int>({30,40}),

 eraseRangeAndShift({10,20,30,40}, -10, 1));

 AssertEqual(std::vector<int>({10,20}),

 eraseRangeAndShift({10,20,30,40}, 2, 20));

 AssertEqual(std::vector<int>({}),

 eraseRangeAndShift({}, 0, 5));

 AssertEqual(std::vector<int>({1,5}),

 eraseRangeAndShift({1,2,3,4,5}, 1, 3));

 AssertEqual(std::vector<int>({1,2,3,4,5}),

 eraseRangeAndShift({1,2,3,4,5}, -3, -1));

 AssertEqual(std::vector<int>({1,2,5}),

 eraseRangeAndShift({1,2,3,4,5}, 2, 3));

 AssertEqual(std::vector<int>({4,5}),

 eraseRangeAndShift({1,2,3,4,5}, -1, 2));

 AssertEqual(std::vector<int>({1}),

 eraseRangeAndShift({1,2,3}, 1, 2));

}
