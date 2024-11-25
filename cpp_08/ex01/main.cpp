#include "Span.hpp"

int main()
{
    try{
        Span sp(115);
        std::vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        v.push_back(40);

        
        sp.fillContainer(v.begin(), v.end());
        std::cout << sp.longestSpan() << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}