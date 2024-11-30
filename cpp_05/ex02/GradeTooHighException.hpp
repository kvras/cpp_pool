#ifndef GRADE_TOO_HIGH_EXCEPTION
#define GRADE_TOO_HIGH_EXCEPTION

#include <exception>

class GradeTooHighException : public std::exception {
    public :
    const char* what() const _NOEXCEPT;
};


#endif
