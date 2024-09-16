#ifndef CHARACTER_HPP
#define CHARACTER_HPP


#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria* inventory[4];
    public:
        Character();
        Character(const Character& src);
        ~Character();
        Character& operator=(const Character& src);

        Character(const std::string& name);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif