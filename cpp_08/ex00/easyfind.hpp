#pragma once
#include <iostream>

template <typename T>

void easyfind(T container, int nbr){
    if (std::find(container.begin(),container.end(), nbr) == container.end())
        throw (std::string("Not founded"));
    else
        std::cout << "founded\n";
} 