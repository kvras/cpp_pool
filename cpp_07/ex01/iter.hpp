#pragma once
#include<iostream>
template <typename T, typename F>
void iter(T addresse,size_t size,F function){
    for(size_t i= 0;i < size;i++)
        function(addresse[i]);
}