#include "Animal.hpp"
#include <iostream>

Animal::Animal( void )
{
    std::cout << "Animal default constructor called" << std::endl;
    this->type = "Animal";
}

Animal::Animal(Animal &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = copy.type;
}

Animal::~Animal( void )
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal& copy)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    this->type = copy.type;
    return *this;
}

void    Animal::makeSound( void ) const
{
    std::cout << this->getType() << " says ..." << std::endl;
}

std::string Animal::getType( void ) const
{
    return this->type;
}