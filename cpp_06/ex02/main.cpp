#include "Detect.hpp"

int main(){

    srand(static_cast<unsigned int>(time(0)));

    Base *p = generate();
    identify(p);
    p = generate();
    identify(p);
    p = generate();
    identify(p);
    p = generate();
    identify(p);
    p = generate();
    identify(p);
    p = generate();
    identify(p);
    p = generate();
    identify(p);
}