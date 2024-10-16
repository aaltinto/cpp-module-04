#include "Cat.hpp"
#include <iostream>

Cat::Cat( void )
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat &copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = copy.type;
}

Cat::~Cat( void )
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat& copy)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    this->type = copy.type;
    return *this;
}

void    Cat::makeSound( void ) const
{
    std::cout << this->getType() << " says meow meow" << std::endl;
}