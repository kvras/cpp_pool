#include "RPN.hpp"

int calculate(int nbr1, int nbr2, char oper) {
    switch (oper) {
        case '+': return nbr1 + nbr2;
        case '-': return nbr1 - nbr2;
        case '*': return nbr1 * nbr2;
        case '/': return nbr1 / nbr2;
        default: return 0;
    }
}

bool validnum(char *str)
{
    for (int i = 0; str && str[i] ; i++){
        if (!isdigit(str[i]))
            return false;
    }
    return true;
}