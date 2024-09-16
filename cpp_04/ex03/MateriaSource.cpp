
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    count = 0;
    for (int i = 0; i < 4; i++)
        materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (materia[i])
            delete materia[i];
}


MateriaSource::MateriaSource(const MateriaSource &copy)
{
    count = copy.count;
    for (int i = 0; i < 4; i++)
        materia[i] = copy.materia[i];
}


MateriaSource &MateriaSource::operator=(const MateriaSource &copy)
{
    count = copy.count;
    for (int i = 0; i < 4; i++)
        materia[i] = copy.materia[i];
    return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
    if (count < 4)
    {
        this->materia[count] = materia;
        count++;
    }
    else
        delete materia;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (materia[i] && materia[i]->getType() == type)
            return (materia[i]->clone());
    }
    return (NULL);
}
