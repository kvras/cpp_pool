#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string str){
    double nbr;
    try{
        nbr = std::stod(str); 
    }
    catch(const std::exception& e){
        if(str != "nan" && str != "nanf" && str != "-inf" && str != "+inf"){
            std::cout << "char: Impossible" << std::endl;
            std::cout << "int: Impossible" << std::endl;
            std::cout << "float: Impossible" << std::endl;
            std::cout << "double: Impossible" << std::endl;
            return;
        }
    }

    if (str == "nan" || str == "nanf" || str == "-inf" || str == "+inf")
        std::cout << "char: impossible" << std::endl;
    else
    {
        std::cout << "char: ";
        if (nbr >= 32 && nbr <= 126)
            std::cout << "'" << static_cast<char>(nbr) << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }

    if (nbr < INT_MIN || nbr > INT_MAX)
        std::cout << "int: Impossible" << std::endl;
    else
    {
        std::cout << "int: ";
        if (str == "nan" || str == "nanf" || str == "-inf" || str == "+inf")
            std::cout << str << std::endl;
        else
            std::cout << static_cast<int>(nbr) << std::endl;
    }

    if (nbr < INT_MIN || nbr > INT_MAX)
        std::cout << "float: Impossible" << std::endl;
    else
    {
        std::cout << "float: ";
        if (str == "nan" || str == "nanf" || str == "-inf" || str == "+inf")
            std::cout << str << std::endl;
        else
            std::cout << static_cast<float>(nbr) << std::endl;
    }
    
    if (nbr < INT_MIN || nbr > INT_MAX)
        std::cout << "double: Impossible" << std::endl;
    else
    {
        std::cout << "double: ";
        if (str == "nan" || str == "nanf" || str == "-inf" || str == "+inf")
            std::cout << str << std::endl;
        else
            std::cout << static_cast<float>(nbr) << std::endl;
    }
}
