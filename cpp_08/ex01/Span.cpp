#include "Span.hpp"

Span::Span(unsigned int nbr){
    srand(time(NULL));
    size = nbr;
    index = 0;

} 
Span& Span::operator=(const Span& obj){
    if (this != &obj)
        this->vect = obj.vect;
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
    index++;
}


unsigned long Span::longestSpan(){
    int min = *std::min_element(vect.begin(), vect.end());
    int max = *std::max_element(vect.begin(), vect.end());

    return (unsigned long)max - min;
}

unsigned long Span::shortestSpan()
{
    std::sort(vect.begin(), vect.end());
    std::vector<int>::iterator it;
    unsigned long ret = 0;
    unsigned long result = 0;
    ret = ~ret;
    for(it  = vect.begin() ;it != vect.end(); it++ ){
        result = (long)*it - *(it-1);
        if (result < ret)
            ret = result;
    }
    return ret;
}

void Span::fillContainer(void){
    
    for(size_t i = 0; i < size;i++){
        addNumber(rand());
    }
}