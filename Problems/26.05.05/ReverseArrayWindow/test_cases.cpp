#include "solution.cpp"

#ifndef PROBLEM_NAME
#define PROBLEM_NAME "Reverse Array Window"
#endif

#include "../../../test.h"

using namespace Test;

bool ArraysEqual(const int* left, const int* right, int size)
{
    for (int i = 0; i < size; ++i)
    {
        if (*(left + i) != *(right + i))
            return false;
    }

    return true;
}

void AssertArrayEqual(const int* expected, const int* actual, int size)
{
    AssertEqual(true, ArraysEqual(expected, actual, size));
}

void TestSolution()
{
    {
        int values[] = {10, 20, 30, 40, 50};
        int expected[] = {10, 40, 30, 20, 50};

        reverseArrayWindow(values, 5, 1, 3);

        AssertArrayEqual(expected, values, 5);
    }

    {
        int values[] = {1, 2, 3, 4, 5};
        int expected[] = {5, 4, 3, 2, 1};

        reverseArrayWindow(values, 5, 0, 4);

        AssertArrayEqual(expected, values, 5);
    }

    {
        int values[] = {1, 2, 3, 4, 5};
        int expected[] = {1, 2, 3, 4, 5};

        reverseArrayWindow(values, 5, 2, 2);

        AssertArrayEqual(expected, values, 5);
    }

    {
        int values[] = {1, 2, 3, 4, 5};
        int expected[] = {3, 2, 1, 4, 5};

        reverseArrayWindow(values, 5, -10, 2);

        AssertArrayEqual(expected, values, 5);
    }

    {
        int values[] = {1, 2, 3, 4, 5};
        int expected[] = {1, 2, 5, 4, 3};

        reverseArrayWindow(values, 5, 2, 100);

        AssertArrayEqual(expected, values, 5);
    }

    {
        int values[] = {7, 8, 9};
        int expected[] = {7, 8, 9};

        reverseArrayWindow(values, 3, 5, 10);

        AssertArrayEqual(expected, values, 3);
    }

    {
        int values[] = {7, 8, 9};
        int expected[] = {7, 8, 9};

        reverseArrayWindow(values, 3, -5, -1);

        AssertArrayEqual(expected, values, 3);
    }

    {
        int values[] = {42};
        int expected[] = {42};

        reverseArrayWindow(values, 1, 0, 0);

        AssertArrayEqual(expected, values, 1);
    }

    {
        int values[] = {-1, -2, -3, -4};
        int expected[] = {-1, -4, -3, -2};

        reverseArrayWindow(values, 4, 1, 3);

        AssertArrayEqual(expected, values, 4);
    }

    {
        int values[] = {5, 5, 5, 1, 2};
        int expected[] = {5, 1, 5, 5, 2};

        reverseArrayWindow(values, 5, 1, 3);

        AssertArrayEqual(expected, values, 5);
    }

    {
        int values[] = {100, 200, 300, 400};
        int expected[] = {100, 300, 200, 400};

        reverseArrayWindow(values, 4, 1, 2);

        AssertArrayEqual(expected, values, 4);
    }

    {
        int values[] = {1, 2, 3, 4};
        int expected[] = {1, 2, 3, 4};

        reverseArrayWindow(values, 0, 0, 2);

        AssertArrayEqual(expected, values, 4);
    }

    {
        int values[] = {1, 2, 3, 4};
        int expected[] = {1, 2, 3, 4};

        reverseArrayWindow(values, -4, 0, 2);

        AssertArrayEqual(expected, values, 4);
    }

    {
        int* values = nullptr;

        reverseArrayWindow(values, 5, 0, 2);

        AssertEqual(true, values == nullptr);
    }

    {
        int values[] = {9, 8, 7, 6, 5, 4};
        int expected[] = {9, 8, 5, 6, 7, 4};

        reverseArrayWindow(values, 6, 2, 4);

        AssertArrayEqual(expected, values, 6);
    }
}
