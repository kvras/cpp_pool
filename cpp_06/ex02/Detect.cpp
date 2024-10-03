#include "Detect.hpp"

Base *generate(void){
    srand(static_cast<unsigned int>(time(0)));
    int random = rand() % 3;
    if(random == 0)
        return new A;
    else if(random == 1)
        return new B;
    else if(random == 2)
        return new C;
    return NULL;
}

void identify(Base *p){
    if (dynamic_cast<A*>(p))
        std::cout << "it s A class" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "it s B class" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "it s C class" << std::endl;
}

void identify(Base& p){

    try{
        (void)dynamic_cast<A&>(p);
        std::cout << "it s A class" << std::endl;
        return;
    }
    catch(std::bad_cast& e){}


    try{
       (void)dynamic_cast<B&>(p);
        std::cout << "it s B class" << std::endl;
        return;
    }
    catch(std::bad_cast& e){}


    try{
        (void)dynamic_cast<C&>(p);
        std::cout << "it s C class" << std::endl;
        return;
    }
    catch(std::bad_cast& e){}
}