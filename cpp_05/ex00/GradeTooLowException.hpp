#ifndef GRADE_TOO_LOW_EXCEPTION
#define GRADE_TOO_LOW_EXCEPTION

#include <exception>

class GradeTooLowException : public std::exception {
public:
    const char* what() const _NOEXCEPT;
};

#endif