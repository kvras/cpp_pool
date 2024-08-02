#include <fstream>
#include <iostream>

int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cout << "nbr of args invalide! "<<std::endl;
        return 0;
    }
    std::fstream file(argv[1]);
    std::string text;
    std::string line;
    std::string newText;
    size_t pos;
    size_t lbidaya = 0;
    if(!file)
    {
        std::cout << "Error opening file" << std::endl;
        return 0;
    }
    while(std::getline(file, line))
    {
        text += line;
        if(!file.eof())
            text += "\n";
    }
    pos = text.find(argv[2]);
    while(pos != std::string::npos)
    {
        lbidaya += pos +  std::string(argv[3]).size();
        text = text.substr(0 , pos) + argv[3] + text.substr(pos + std::string(argv[2]).size(), text.size());
        pos = text.find(argv[2], lbidaya);
    }
    file.close();
    std::ofstream outfile(argv[1]);
    if(!outfile)
    {
        std::cout << "Error opening file" << std::endl;
        return 0;
    }
    outfile << text;
    outfile.close();
}
