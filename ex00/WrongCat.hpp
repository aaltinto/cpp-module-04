#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat( void );
        WrongCat(WrongCat &copy);
        ~WrongCat( void );
        WrongCat &operator=(WrongCat &copy);
        void makeSound( void ) const;
};