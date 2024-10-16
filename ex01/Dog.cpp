#include "Dog.hpp"
#include <iostream>

Dog::Dog( void )
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(Dog &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = copy.type;
}

Dog::~Dog( void )
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog& copy)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    this->type = copy.type;
    return *this;
}

void    Dog::makeSound( void ) const
{
    std::cout << this->getType() << " says woof woof" << std::endl;
}