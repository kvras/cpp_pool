#include "Span.hpp"

Span::Span(unsigned int nbr){
    size = nbr;
    index = 0;
} 
Span& Span::operator=(const Span& obj){
    if (this != &obj)
    {
        this->vect = obj.vect;
        this->size = obj.size;
        this->index = obj.index;
    }
    return *this;
}

Span::Span(const Span& obj){
    *this = obj;
}

Span::~Span(){}

void Span::addNumber(int nbr){
    if (index >= size)
        throw (std::out_of_range("Out of range"));
    vect.push_back(nbr);
    std::cout << " -> " << nbr << std::endl;
    index++;
}


unsigned long Span::longestSpan(){
    if (index < 2)
        throw(std::runtime_error("At least 2 numbers in container"));
    int min = *std::min_element(vect.begin(), vect.end());
    int max = *std::max_element(vect.begin(), vect.end());

    return (unsigned long)max - min;
}

unsigned long Span::shortestSpan()
{
    if (index < 2)
        throw(std::runtime_error("At least 2 numbers in container"));
    std::sort(vect.begin(), vect.end());
    std::vector<int>::iterator it;
    unsigned long ret = 0;
    unsigned long result = 0;
    ret = ~ret;
    for(it = vect.begin() ;it != vect.end(); it++ ){
        result = (long)*it - *(it-1);
        if (result < ret)
            ret = result;
    }
    return ret;
}