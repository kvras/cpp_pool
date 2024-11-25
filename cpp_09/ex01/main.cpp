#include "RPN.hpp"
#include <sstream>

int main(int argc, char *argv[]){
    if (argc != 2){
        std::cout << "error" << std::endl;
        return 1;
    }
    std::stack<int> stack_nums;
    std::stack<int> stack_operations;
    std::string operators = "+*-/";
    int result = 0;
    std::string str;
    std::stringstream stream(argv[1]);
    while(std::getline(stream, str, ' '))
    {
        if(operators.find(str) != std::string::npos && stack_nums.size() > 1)
        {
            int tmp = stack_nums.top();
            stack_nums.pop();
            result = calculate(stack_nums.top(),tmp, str.c_str()[0]);
            stack_nums.pop();
            stack_nums.push(result);
        }
        else if (validnum(str.c_str()))
            stack_nums.push(std::atoi(str.c_str()));
        else
        {
            std::cerr << "Error" << std::endl;
            return 1;
        }
    }
    if (stack_nums.size() == 1)
        std::cout << stack_nums.top() << std::endl;
    else
        std::cerr << "ERROR" << std::endl;
}
