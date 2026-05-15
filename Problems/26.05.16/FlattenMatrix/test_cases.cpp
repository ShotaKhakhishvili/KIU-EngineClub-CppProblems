#include "solution.cpp"

#ifndef PROBLEM_NAME
#define PROBLEM_NAME "Flatten Matrix"
#endif

#include "../../../test.h"

using namespace Test;

void TestSolution()
{
    {
        const int matrix[3][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        };
        int output[12] = {};
        const int expected[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

        flattenMatrix(matrix, 3, output);

        AssertArrayEqual(expected, output, 12);
    }

    {
        const int matrix[1][4] = {{7, 14, 21, 28}};
        int output[4] = {};
        const int expected[] = {7, 14, 21, 28};

        flattenMatrix(matrix, 1, output);

        AssertArrayEqual(expected, output, 4);
    }

    {
        const int matrix[2][4] = {
            {0, 0, 0, 0},
            {0, 0, 0, 0}
        };
        int output[8] = {};
        const int expected[] = {0, 0, 0, 0, 0, 0, 0, 0};

        flattenMatrix(matrix, 2, output);

        AssertArrayEqual(expected, output, 8);
    }

    {
        const int matrix[2][4] = {
            {-1, -2, -3, -4},
            {-5, -6, -7, -8}
        };
        int output[8] = {};
        const int expected[] = {-1, -2, -3, -4, -5, -6, -7, -8};

        flattenMatrix(matrix, 2, output);

        AssertArrayEqual(expected, output, 8);
    }

    {
        const int matrix[4][4] = {
            {1,  0,  0,  0},
            {0,  1,  0,  0},
            {0,  0,  1,  0},
            {0,  0,  0,  1}
        };
        int output[16] = {};
        const int expected[] = {1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1};

        flattenMatrix(matrix, 4, output);

        AssertArrayEqual(expected, output, 16);
    }

    {
        // nullptr: output must remain untouched
        int output[4] = {99, 99, 99, 99};
        const int expected[] = {99, 99, 99, 99};

        flattenMatrix(nullptr, 3, output);

        AssertArrayEqual(expected, output, 4);
    }

    {
        // rows <= 0: output must remain untouched
        const int matrix[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
        int output[8] = {99, 99, 99, 99, 99, 99, 99, 99};
        const int expected[] = {99, 99, 99, 99, 99, 99, 99, 99};

        flattenMatrix(matrix, 0, output);

        AssertArrayEqual(expected, output, 8);
    }

    {
        // rows <= 0 (negative): output must remain untouched
        const int matrix[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
        int output[8] = {99, 99, 99, 99, 99, 99, 99, 99};
        const int expected[] = {99, 99, 99, 99, 99, 99, 99, 99};

        flattenMatrix(matrix, -1, output);

        AssertArrayEqual(expected, output, 8);
    }

    {
        const int matrix[3][4] = {
            {100, 200, 300, 400},
            {10,  20,  30,  40},
            {1,   2,   3,   4}
        };
        int output[12] = {};
        const int expected[] = {100, 200, 300, 400, 10, 20, 30, 40, 1, 2, 3, 4};

        flattenMatrix(matrix, 3, output);

        AssertArrayEqual(expected, output, 12);
    }

    {
        // Row-major order check: last row must appear at the end
        const int matrix[2][4] = {
            {5, 5, 5, 5},
            {9, 9, 9, 9}
        };
        int output[8] = {};
        const int expected[] = {5, 5, 5, 5, 9, 9, 9, 9};

        flattenMatrix(matrix, 2, output);

        AssertArrayEqual(expected, output, 8);
    }
}