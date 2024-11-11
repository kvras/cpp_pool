#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
class Span{
    private:
        std::vector<int> vect;
        unsigned int size;
        unsigned int index;
        Span();
    public:
        Span(unsigned int nbr);
        Span(const Span& obj);
        Span &operator=(const Span& obj);
        ~Span();

        void addNumber(int nbr);
        unsigned long longestSpan();
        unsigned long  shortestSpan();
        void fillContainer(void);
};