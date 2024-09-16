#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& src) : AMateria(src) {}

Cure::~Cure() {}

Cure& Cure::operator=(const Cure& src)
{
    AMateria::operator=(src);
    return (*this);
}


void Cure::use(ICharacter& target) const
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}
