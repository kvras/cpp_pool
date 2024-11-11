#include "Span.hpp"

int main()
{
    Span sp(5);
    std::cout << sp.longestSpan() << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    return 0;
}