#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string str){
    if (str.length() == 1 && !isdigit(str[0])){
        std::cout << "char: '" << str[0] << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(str[0]) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(str[0]) << std::endl;
        return;
    }
    
    try{
        char c = static_cast<char>(std::stoi(str));
        std::cout << "char: ";
        if (c < 32 || c > 126)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << "'" << c << "'" << std::endl;
    }catch(const std::exception &e){
        std::cout << "char: impossible" << std::endl;
    }

    try{
        int i = std::stoi(str);
        std::cout << "int: " << i << std::endl;
    }catch(const std::exception &e){
        std::cout << "int: impossible" << std::endl;
    }


    try{
        float f = std::stof(str);
        std::cout << "float: " << f;
        if (f - static_cast<int>(f) == 0)
            std::cout << ".0";
        std::cout << "f" << std::endl;
    }catch(const std::exception &e){
        std::cout << "float: impossible" << std::endl;
    }


    try{
        double d = std::stod(str);
        std::cout << "double: " << d;
        if (d - static_cast<int>(d) == 0)
            std::cout << ".0";
        std::cout << std::endl;

    }catch(const std::exception &e){
        std::cout << "double: impossible" << std::endl;
    }

}