#ifndef Materiasource_HPP
#define Materiasource_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    private:
        AMateria *materia[4];
        int count;
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource &copy);
        MateriaSource &operator=(const MateriaSource &copy);

        void learnMateria(AMateria *materia);
        AMateria *createMateria(std::string const &type);
};

#endif