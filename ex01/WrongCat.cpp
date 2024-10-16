#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat( void )
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    this->type = copy.type;
}

WrongCat::~WrongCat( void )
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat& copy)
{
    std::cout << "WrongCat copy assignment operator called" << std::endl;
    this->type = copy.type;
    return *this;
}

void    WrongCat::makeSound( void ) const
{
    std::cout << this->getType() << " says woof woof" << std::endl;
}