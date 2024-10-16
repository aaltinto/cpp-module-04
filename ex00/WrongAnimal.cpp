#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal( void )
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    this->type = copy.type;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal& copy)
{
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    this->type = copy.type;
    return *this;
}

void    WrongAnimal::makeSound( void ) const
{
    std::cout << this->getType() << " says ..." << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
    return this->type;
}