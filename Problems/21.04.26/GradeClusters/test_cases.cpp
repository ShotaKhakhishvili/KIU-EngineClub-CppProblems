#include "solution.cpp"

#ifndef PROBLEM_NAME
#define PROBLEM_NAME "Grade Clusters"
#endif

#include "../../../test.h"

#include <vector>

using namespace Test;

void TestSolution()
{
    AssertEqual(
        std::vector<int>({0, 0, 0, 1, 1, 0, 2, 3, 2, 4, 1}),
        gradeClusters({42, 65, 95, 100, 39, 67, 95, 76, 88, 76, 83, 92, 76, 93})
    );

    AssertEqual(
        std::vector<int>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}),
        gradeClusters({})
    );

    AssertEqual(
        std::vector<int>({10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}),
        gradeClusters({0, 1, 2, 3, 4, 5, 6, 7, 8, 9})
    );

    AssertEqual(
        std::vector<int>({0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0}),
        gradeClusters({10, 11, 12, 13, 14, 15, 16, 17, 18, 19})
    );

    AssertEqual(
        std::vector<int>({0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 1}),
        gradeClusters({90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100})
    );

    AssertEqual(
        std::vector<int>({1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}),
        gradeClusters({0, 10, 20, 30, 40, 50, 60, 70, 80, 90, 100})
    );

    AssertEqual(
        std::vector<int>({0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4}),
        gradeClusters({100, 100, 100, 100})
    );

    AssertEqual(
        std::vector<int>({0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0}),
        gradeClusters({50, 51, 52, 53, 59})
    );
}
