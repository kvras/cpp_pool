#pragma once
#include <vector>
#include <iostream>

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
