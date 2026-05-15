#include "solution.cpp"

#ifndef PROBLEM_NAME
    #define PROBLEM_NAME "Compress Runs"
#endif

#include "../../../test.h"

#include <vector>
#include <utility>

using namespace Test;

void TestSolution()
{
    AssertEqual(
        std::vector<std::pair<int,int>>{{1,3},{2,2},{3,1},{1,2}},
        compressRuns({1,1,1,2,2,3,1,1})
    );

    AssertEqual(
        std::vector<std::pair<int,int>>{{5,1}},
        compressRuns({5})
    );

    AssertEqual(
        std::vector<std::pair<int,int>>{},
        compressRuns({})
    );

    AssertEqual(
        std::vector<std::pair<int,int>>{{1,1},{2,1},{3,1}},
        compressRuns({1,2,3})
    );

    AssertEqual(
        std::vector<std::pair<int,int>>{{7,4}},
        compressRuns({7,7,7,7})
    );
}
