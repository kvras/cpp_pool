#include "BitcoinExchange.hpp"

int main(int argc, char **argv){

    try{
        if (argc < 2)
            throw std::runtime_error("Error: could not open file.");
        findAppropriateValue(initDatabase(), std::string(argv[1]));
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    

}