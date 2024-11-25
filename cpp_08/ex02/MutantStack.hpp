#pragma once
#include <stack>
#include <iostream>

template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C> {
public:
    MutantStack() : std::stack<T, C>() {}

    MutantStack(const MutantStack& obj) : std::stack<T, C>(obj){};

    MutantStack& operator=(const MutantStack& obj)
    {
        (std::stack<T, C> &)(*this) = (std::stack<T, C> &)(obj);
        return *this;
    }

    ~MutantStack(){};

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    iterator begin() {
        return this->c.begin();
    }

    iterator end() {
        return this->c.end();
    }
};
