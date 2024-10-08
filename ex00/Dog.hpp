#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog( void );
        Dog(Dog &copy);
        ~Dog( void );
        Dog &operator=(Dog &copy);
        void makeSound( void ) const;
};