#include "whatever.hpp"

int main(){
    int a = 0;
    int b = 1;
    std::cout << "a --> " << a  << " b -->" << b << std::endl;
    swap(a,b);
    std::cout << "a --> " << a  << " b -->" << b << std::endl;

    std::cout << max(a,b) << std::endl;
    std::cout << min(a,b) << std::endl;
}