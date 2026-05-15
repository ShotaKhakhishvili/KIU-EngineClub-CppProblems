#include "solution.cpp"

#ifndef PROBLEM_NAME
    #define PROBLEM_NAME "Normalize Strings"
#endif

#include "../../../test.h"

using namespace Test;

void TestSolution()
{
    using namespace Test;

    AssertEqual("Hello world", normalizeLine("hello world"));
    AssertEqual("Hello world", normalizeLine("   hello   world   "));
    AssertEqual("Hello world", normalizeLine("hello\t\tworld"));
    AssertEqual("Hello world", normalizeLine("hELLo WoRLd"));
    AssertEqual("Hello world", normalizeLine("hello,,, world"));
    AssertEqual("Hello world!", normalizeLine("hello world!!!"));
    AssertEqual("Hello world?", normalizeLine("hello world!!!???"));
    AssertEqual("Hello. World! How are you?", normalizeLine("hello. world! how are you?"));
    AssertEqual("42 is the answer", normalizeLine("42 IS THE ANSWER"));
    AssertEqual("Hello", normalizeLine("...hello"));
    AssertEqual("Empty", normalizeLine("!!!???"));
    AssertEqual("Empty", normalizeLine(",,, ###"));
    AssertEqual("Empty", normalizeLine(""));
    AssertEqual("A", normalizeLine("a"));
    AssertEqual("Perfect sentence.", normalizeLine("Perfect sentence."));
}
