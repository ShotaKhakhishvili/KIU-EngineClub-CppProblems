#pragma once

#include <iostream>
#include <vector>
#include <sstream>
#include <string>

#ifndef PROBLEM_NAME
    #define PROBLEM_NAME "Invalid Problem"
#endif

namespace Test
{
    constexpr const char* RED   = "\033[31m";
    constexpr const char* GREEN = "\033[32m";
    constexpr const char* YELLOW = "\033[33m";
    constexpr const char* RESET = "\033[0m";

    int testCase = 0;
    int correctAnswers = 0;

    void Initialize()
    {
        std::cout << YELLOW << "\n\nStarting To Check Your Solution [" << GREEN << PROBLEM_NAME << YELLOW <<"]:\n\n" << RESET;
    }

    void Finalize()
    {
        std::cout << "\n\n";

        if(testCase == correctAnswers)
        {
            std::cout << GREEN << "All Test Cases Passed";
        }
        else
        {
            std::cout << RED << "Failed To Pass All Test Cases";
        }

        std::cout << ": [" << correctAnswers << "/" << testCase << "]\n\n" << RESET;
    }

    void PrintAnswer(const bool answer, std::string expected, std::string actual)
    {
        if(answer)
        {
            std::cout << GREEN << "Passed [" << ++testCase << "]" << RESET << "\n";
            correctAnswers++;
        }
        else
        {
            std::cout << RED << "Failed [" << ++testCase << "]" << RESET << " Expected: " << expected << " | Actual: " << actual << "\n";
        }
    }

    template<typename A, typename B>
    std::ostream& operator<<(std::ostream& os, const std::pair<A,B>& p)
    {
        return os << "{" << p.first << "," << p.second << "}";
    }

    template<typename T>
    std::ostream& operator<<(std::ostream& os, const std::vector<T>& v)
    {
        os << "[";
        for (size_t i = 0; i < v.size(); ++i)
        {
            os << v[i];
            if (i + 1 < v.size()) os << ",";
        }
        return os << "]";
    }

    template<typename T>
    std::string ToString(const T& arg) // a cool way of general "to string" functionality
    {
        std::ostringstream ost;
        ost << arg;
        return ost.str();
    }

    // -------- AssertEqual --------
    template <typename ExpectedT, typename ActualT>
    void AssertEqual(const ExpectedT& expected, const ActualT& actual)
    {
        PrintAnswer(expected == actual, ToString(expected), ToString(actual));
    }

    // -------- AssertTrue --------
    void AssertTrue(bool condition)
    {
        PrintAnswer(condition, "True", "False");
    }

    // -------- AssertFalse --------
    void AssertFalse( bool condition)
    {
        PrintAnswer(!condition, "False", "True");
    }

    template<typename T>
    bool ArraysEqual(const T* left, const T* right, int size)
    {
        for (int i = 0; i < size; ++i)
        {
            if (*(left + i) != *(right + i))
                return false;
        }

        return true;
    }

    template<typename T>
    void AssertArrayEqual(const T* expected, const T* actual, int size)
    {
        AssertEqual(true, ArraysEqual(expected, actual, size));
    }
}