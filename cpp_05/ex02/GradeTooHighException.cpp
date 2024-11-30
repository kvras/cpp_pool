#include "GradeTooHighException.hpp"

const char* GradeTooHighException::what() const _NOEXCEPT {
    return "Grade Too High!";
}