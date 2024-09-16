#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
        ideas[i] = "";
}

Brain::~Brain()
{
}

Brain::Brain(const Brain &copy)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = copy.getIdea(i);
}

Brain &Brain::operator=(const Brain &copy)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = copy.getIdea(i);
    return *this;
}

std::string Brain::getIdea(int i) const
{
    return ideas[i];
}

void Brain::setIdea(int i, std::string idea)
{
    ideas[i] = idea;
}
