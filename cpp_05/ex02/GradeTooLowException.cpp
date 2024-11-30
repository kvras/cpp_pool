#include "GradeTooLowException.hpp"

const char* GradeTooLowException::what() const _NOEXCEPT{
    return "Grade is too low!";
}