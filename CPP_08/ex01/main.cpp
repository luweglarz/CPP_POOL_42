#include "span.hpp"
#include <numeric>

int main()
{
    // Create a vector of size 5 and addNumber with the simple int overload
    Span SimpleTest(5);
    SimpleTest.addNumber(5);
    SimpleTest.addNumber(3);
    SimpleTest.addNumber(17);
    SimpleTest.addNumber(9);
    SimpleTest.addNumber(11);
    // Display the longest and shortest span of it
    std::cout << "Longest span of SimpleTest: " << SimpleTest.longestSpan() << std::endl;
    std::cout << "Shortest span of SimpleTest: " << SimpleTest.shortestSpan() << std::endl << std::endl;

    // Create a vector of size 5 and addNumber with the iterator overload
    Span FillWithIteratorTest(5);
    FillWithIteratorTest.addNumber(SimpleTest.getvector().begin(), SimpleTest.getvector().end());
    // Display the longest and shortest span of it
    std::cout << "Longest span of FillWithIteratorTest: " << FillWithIteratorTest.longestSpan() << std::endl;
    std::cout << "Shortest span of FillWithIteratorTest: " << FillWithIteratorTest.shortestSpan() << std::endl << std::endl;

    // Create a vector of size 2000 and addNumber with the iterator overload generated with IOTA in a range from 1 to 2000
    std::vector<int> vec(2000);
    std::iota(vec.begin(), vec.end(), 1);
    Span BigSizeTest(2000);
    BigSizeTest.addNumber(vec.begin(), vec.end());
    // Display the longest and shortest span of it
    std::cout << "Longest span of BigSizeTest: " << BigSizeTest.longestSpan() << std::endl;
    std::cout << "Shortest span of BigSizeTest: " << BigSizeTest.shortestSpan() << std::endl << std::endl;

    // Create a vector of size 2000 and addNumber with the iterator overload generated with vector constructor(2000 numbers of value2)
    std::vector<int> vec2(2000, 2);
    Span NoSpanTest(2000);
    NoSpanTest.addNumber(vec2.begin(), vec2.end());
    try{
         // Display the longest and shortest span of it in block try to catch the exception
        std::cout << "Longest span of NoSpanTest: " << NoSpanTest.longestSpan() << std::endl << std::endl;
        std::cout << "Shortest span of NoSpanTest: " << NoSpanTest.shortestSpan() << std::endl << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
     // Create a vector of size 2000 and addNumber with the iterator overload generated with vector constructor(2000 numbers of value2)
    Span EmptySPan(0);
    try{
         // Display the longest and shortest span of it in block try to catch the exception
        std::cout << "Longest span of EmptySPan: " << EmptySPan.longestSpan() << std::endl;
        std::cout << "Shortest span of EmptySPan: " << EmptySPan.shortestSpan() << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}