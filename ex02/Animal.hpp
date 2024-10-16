#pragma once
#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal( void );
        Animal(Animal &copy);
        virtual ~Animal( void );
        virtual Animal &operator=(Animal &copy);
        virtual void makeSound( void ) const = 0;
        std::string getType( void ) const;    

};