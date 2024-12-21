#pragma once
#include <vector>
#include <iostream>
#include <cstring>
#include <sstream>

template <typename T>
void insertion_sort(T& container)
{
    for (typename T::iterator it = container.begin(); it != container.end(); ++it) 
    {
        typename T::iterator min_it = it;
        for (typename T::iterator jt = std::next(it); jt != container.end(); ++jt)
        {
            if (*jt < *min_it)
                min_it = jt;
        }
        if (it != min_it)
            std::swap(*it, *min_it);
    }
}

template <typename V>

V merge_insertion_sort(V& container, int argc, char **argv)
{
    V second_container;
    V first_container;
    
    for (int i = 1;i  < argc;i++)
    {
        int var;
        std::stringstream ss(argv[i]);
        ss >> var;
        if (ss.fail() || !ss.eof())
        {
            std::cout << "Error" << std::endl;
            exit(1);
        }
        container.push_back(var);
    }
    for (size_t i = 0; i < container.size() ; i+=2)
    {
       if (container[i]  < container[i + 1])
        {    
            int tmp = container[i];
            container[i] =  container[i + 1];
            container[i + 1] = tmp;
        }
    }
    for(size_t i = 0; i < container.size() - 1; i+=2)
    {
        first_container.push_back(container[i]);
        second_container.push_back(container[i + 1]);
    }

    if (container.size() % 2 == 1)
        second_container.push_back(container[container.size() - 1]);
    insertion_sort(first_container);
    for (typename V::iterator it = second_container.begin(); it != second_container.end(); it++)
    {
        typename V::iterator iterat = std::lower_bound(first_container.begin(), first_container.end(), *it);
        first_container.insert(iterat, *it);
    }
    return first_container;
}
