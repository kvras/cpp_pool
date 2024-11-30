#pragma once
#include <vector>
#include <iostream>
#include <cstring>
template <typename T>

void insertion_sort(T& container)
{
    size_t size = container.size();
    for (size_t x = 0 ; x < size ; x++)
    {
        size_t y = x + 1;
        size_t min = x;
        for (; y < size ; y++)
        {
            if (container[min] > container[y])
                min = y;
        }
        if (x != min)
        {
            int temp = container[x];
            container[x] = container[min];
            container[min] = temp;
        }
            
    }   
}

template <typename V>

V merge_insertion_sort(V& container, int argc, char **argv)
{
    V second_container;
    V first_container;

    for (int i = 1;i  < argc;i++)
        container.push_back(std::atoi(argv[i]));
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
    for (auto it = second_container.begin(); it != second_container.end(); it++)
    {
        auto iterat = std::lower_bound(first_container.begin(), first_container.end(), *it);
        first_container.insert(iterat, *it);
    }
    return first_container;
}
