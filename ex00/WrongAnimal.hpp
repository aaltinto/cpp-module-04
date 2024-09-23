#pragma once
#include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal( void );
        WrongAnimal(WrongAnimal &copy);
        virtual ~WrongAnimal( void );
        virtual WrongAnimal &operator=(WrongAnimal &copy);
        virtual void makeSound( void ) const;
        std::string getType( void ) const;    

};