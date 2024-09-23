#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat( void );
        Cat(Cat &copy);
        ~Cat( void );
        Cat &operator=(Cat &copy);
        void makeSound( void ) const;
};