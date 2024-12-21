#include "BitcoinExchange.hpp"

static void parseDate(std::string date){
    if (date.size() != 10)
        throw std::runtime_error("Wrong date format");
    
    for (int i = 0 ;date.c_str() && date.c_str()[i]; i++)
    {
        if ((i == 4 || i == 7) && date.c_str()[i] == '-')
            continue ;
        else if (!isdigit(date.c_str()[i]))
            throw std::runtime_error("Wrong date format");
    }
    int month;
    int day;
    int year;
    char dash;
    std::stringstream stream(date);
    stream >> year >> dash >> month >> dash >> day;

    if (year < 2009 || (month < 1 || month > 12) || (day < 1 || day > 31))
    {
        throw std::runtime_error("Wrong date format");
    }
}

void findAppropriateValue(std::map<std::string ,float> Database, std::string name)
{
    std::ifstream file(name);
    std::string line;
    float value;
    if (!file)
        throw std::runtime_error("Error: could not open file");
    std::getline(file, line);
    if(line != "date | value")
        throw std::runtime_error("incorrect First line");
    while(std::getline(file, line))
    {
        try
        {
            std::string::size_type pos = line.find(" | ");
            if (pos == std::string::npos)
                throw std::runtime_error("Error: bad input => "+ line);
            parseDate(line.substr(0, pos));
            std::string substred = line.substr(pos+3);
            if(substred.size() == 0)
                throw std::runtime_error("Empty number of btc coins");
            for(int i = 0; substred.c_str()[i] ; i++)
            {
                if (!isdigit(substred.c_str()[i]))
                {
                    if(substred.c_str()[i] == '.' && i > 0 && isdigit(substred.c_str()[i - 1]))
                        continue ;
                    throw std::runtime_error("Error: not a positive number.");
                }
            }
            std::stringstream stream(substred);
            stream >> value;
            if (stream.fail() || value > 1000)
                throw std::runtime_error("Error: too large a number.");
            else if (value < 0)
                throw std::runtime_error("Error: not a positive number.");
        
            std::map<std::string ,float>::iterator it = Database.upper_bound(line.substr(0, pos));
            if (it == Database.begin())
                throw std::runtime_error("Error: bas input => " + line);
            it--;
            float ret = (it)->second * value;
            std::cout << line.substr(0, pos) << " => " << value << " = "<< ret << std::endl;
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
}

std::map<std::string, float> initDatabase(){
    std::map<std::string, float> Database;
    std::string line;
    std::string key;
    float value;

    std::ifstream file("data.csv");
    std::getline(file, line);
    if(line != "date,exchange_rate")
        throw std::runtime_error("Error in csv file");
    while(std::getline(file, line))
    {
        size_t pos = line.find(',');
        if (pos == std::string::npos)
            throw std::runtime_error("Error missing ','");
        key = line.substr(0,pos);
        parseDate(key);
        std::string substred = line.substr(pos+1);
        if(substred.size() == 0)
            throw std::runtime_error("Empty btc price value");
        for(int i = 0; substred.c_str()[i] ; i++)
        {
            if (!isdigit(substred.c_str()[i]))
            {
                if(substred.c_str()[i] == '.' && i > 0 && isdigit(substred.c_str()[i - 1]))
                    continue ;
                throw std::runtime_error("Error in Btc price value");
            }
        }
        std::stringstream stream(substred);
        stream >> value;
        if (value < 0)
        {
            std::cout <<value<<std::endl;;
            throw std::runtime_error("value of btc under 0");
        }
        else if (stream.fail())
            throw std::runtime_error("number too large");
        Database[key] = value;
    }
    return Database;
}
