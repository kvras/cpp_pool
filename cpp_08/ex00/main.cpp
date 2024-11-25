#include "easyfind.hpp"
#include <vector>
int main(){
    std::vector<int> container;
    container.push_back(7);
    container.push_back(5);
    container.push_back(1);
    container.push_back(4);

    try{
        easyfind(container, 4);}
    catch(std::string e){
        std::cout << e << std::endl;
    }
}