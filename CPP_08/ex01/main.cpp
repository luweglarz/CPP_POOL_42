#include "span.hpp"
#include <numeric>

int main()
{
    // Create a vector of size 5 and addNumber with the simple int overload
    Span test(5);
    test.addNumber(5);
    test.addNumber(3);
    test.addNumber(17);
    test.addNumber(9);
    test.addNumber(11);
    // Display the longest and shortest span of it
    std::cout << "Longest span of test: " << test.longestSpan() << std::endl;
    std::cout << "Shortest span of test: " << test.shortestSpan() << std::endl << std::endl;
    // Create a vector of size 5 and addNumber with the iterator overload
    Span test2(5);
    test2.addNumber(test.getvector().begin(), test.getvector().end());
    // Display the longest and shortest span of it
    std::cout << "Longest span of test2: " << test.longestSpan() << std::endl;
    std::cout << "Shortest span of test2: " << test.shortestSpan() << std::endl;

    // Create a vector of size 5 and addNumber with the iterator overload
    std::vector<int> vec(2000);
    std::iota(vec.begin(), vec.end(), 1);
    Span test3(2000);
    test3.addNumber(vec.begin(), vec.end());
     // Display the longest and shortest span of it
    std::cout << "Longest span of test2: " << test3.longestSpan() << std::endl;
    std::cout << "Shortest span of test2: " << test3.shortestSpan() << std::endl;
}