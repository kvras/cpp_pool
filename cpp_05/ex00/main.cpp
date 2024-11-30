#include "Bureaucrat.hpp"


int main(){

    try{
        Bureaucrat b1 = Bureaucrat("b1", 1);
        Bureaucrat b2 = Bureaucrat("b2", 150);
        std::cout << b1 << b2 ;
        b1.incrementGrade();
        b2.decrementGrade();
        std::cout << b1 << b2;
    }
    catch(std::exception& e){
        std::cerr << "Exception :: "<< e.what() << std::endl;
    }
    return 0;
}