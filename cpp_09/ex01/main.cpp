#include "RPN.hpp"

int main(int argc, char *argv[]){
    if (argc < 2){
        std::cout << "error" << std::endl;
        return 1;
    }
    std::stack<int> stack_nums;
    std::stack<int> stack_operations;
    std::string str = "+*-/";
    int result = 0;
    for (int i = 1;i < argc ;i++)
    {
        if(str.find(argv[i][0]) != std::string::npos && stack_nums.size() > 1)
        {
            int tmp = stack_nums.top();
            stack_nums.pop();
            result = calculate(stack_nums.top(),tmp, argv[i][0]);
            stack_nums.pop();
            stack_nums.push(result);
        }
        else if (validnum(argv[i]))
            stack_nums.push(std::atoi(argv[i]));
        else
        {
            std::cout << "Error" << std::endl;
            return 1;
        }
    }
    if (stack_nums.size() == 1)
        std::cout << stack_nums.top() << std::endl;
    else
        std::cout << "ERROR" << std::endl;
}
