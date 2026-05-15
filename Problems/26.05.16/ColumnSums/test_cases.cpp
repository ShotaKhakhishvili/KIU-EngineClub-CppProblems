#include "solution.cpp"

#ifndef PROBLEM_NAME
#define PROBLEM_NAME "Column Sums"
#endif

#include "../../../test.h"

using namespace Test;

void TestSolution()
{
    {
        const int matrix[3][4] = {
            {1,  2,  3,  4},
            {5,  6,  7,  8},
            {9, 10, 11, 12}
        };
        int sums[4] = {};
        const int expected[] = {15, 18, 21, 24};

        columnSums(matrix, 3, sums);

        AssertArrayEqual(expected, sums, 4);
    }

    {
        const int matrix[1][4] = {{3, 7, 2, 8}};
        int sums[4] = {};
        const int expected[] = {3, 7, 2, 8};

        columnSums(matrix, 1, sums);

        AssertArrayEqual(expected, sums, 4);
    }

    {
        const int matrix[2][4] = {
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        };
        int sums[4] = {};
        const int expected[] = {0, 0, 0, 0};

        columnSums(matrix, 2, sums);

        AssertArrayEqual(expected, sums, 4);
    }

    {
        // All same values per column
        const int matrix[4][4] = {
            {1, 2, 3, 4},
            {1, 2, 3, 4},
            {1, 2, 3, 4},
            {1, 2, 3, 4}
        };
        int sums[4] = {};
        const int expected[] = {4, 8, 12, 16};

        columnSums(matrix, 4, sums);

        AssertArrayEqual(expected, sums, 4);
    }

    {
        // Negative values
        const int matrix[2][4] = {
            {-1, -2, -3, -4},
            { 1,  2,  3,  4}
        };
        int sums[4] = {};
        const int expected[] = {0, 0, 0, 0};

        columnSums(matrix, 2, sums);

        AssertArrayEqual(expected, sums, 4);
    }

    {
        // All negative
        const int matrix[2][4] = {
            {-10, -20, -30, -40},
            { -5, -15, -25, -35}
        };
        int sums[4] = {};
        const int expected[] = {-15, -35, -55, -75};

        columnSums(matrix, 2, sums);

        AssertArrayEqual(expected, sums, 4);
    }

    {
        // nullptr: sums must be all zeros
        int sums[4] = {99, 99, 99, 99};
        const int expected[] = {0, 0, 0, 0};

        columnSums(nullptr, 3, sums);

        AssertArrayEqual(expected, sums, 4);
    }

    {
        // rows == 0: sums must be all zeros
        const int matrix[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
        int sums[4] = {99, 99, 99, 99};
        const int expected[] = {0, 0, 0, 0};

        columnSums(matrix, 0, sums);

        AssertArrayEqual(expected, sums, 4);
    }

    {
        // rows < 0: sums must be all zeros
        const int matrix[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
        int sums[4] = {99, 99, 99, 99};
        const int expected[] = {0, 0, 0, 0};

        columnSums(matrix, -5, sums);

        AssertArrayEqual(expected, sums, 4);
    }

    {
        // Large values
        const int matrix[3][4] = {
            {1000, 2000, 3000, 4000},
            {1000, 2000, 3000, 4000},
            {1000, 2000, 3000, 4000}
        };
        int sums[4] = {};
        const int expected[] = {3000, 6000, 9000, 12000};

        columnSums(matrix, 3, sums);

        AssertArrayEqual(expected, sums, 4);
    }

    {
        // Single-element columns dominated by one row
        const int matrix[3][4] = {
            {0,  0,  0,  0},
            {0,  0,  0,  0},
            {5, 10, 15, 20}
        };
        int sums[4] = {};
        const int expected[] = {5, 10, 15, 20};

        columnSums(matrix, 3, sums);

        AssertArrayEqual(expected, sums, 4);
    }
}