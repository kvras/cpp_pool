#pragma once
#include <iostream>

template <typename T>

int easyfind(T container, int nbr){
    typename T::iterator it;
    for(it = container.begin(); it != container.end() ;it++)
        if (*it == nbr)
        {
            std::cout << "founded" << std::endl;
            return (0);
        }
    throw (std::string("Not founded"));
    return (-1);
} 