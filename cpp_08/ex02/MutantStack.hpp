#pragma once
#include <stack>
#include <iostream>
template <typename T>
class MutantStack : public std::stack<T> {
public:
    MutantStack() : std::stack<T>() {}

    MutantStack(const MutantStack& obj) : std::stack<T>(obj){};

    MutantStack& operator=(const MutantStack& obj) {
        *this = obj;
    }

    ~MutantStack();

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    iterator begin() {
        return this->c.begin();
    }

    iterator end() {
        return this->c.end();
    }
};
