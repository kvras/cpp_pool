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
        template <typename T>
        void fillContainer(T iterator1, T iterator2)
        {
             vect.insert(vect.end(), iterator1, iterator2);
        }
        
};