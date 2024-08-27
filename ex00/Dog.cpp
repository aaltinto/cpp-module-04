#include "Dog.hpp"
#include <iostream>

Dog::Dog(std::string type): Animal(type)
{
    std::cout << "Dog constructor called" << std::endl;
}
Dog::Dog(Dog &copy): Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete this;
}

Dog &Dog::operator=(Dog &copy)
{
    if (&copy != this)
    {
        std::cout << "Dog copy assaignment operator called" << std::endl;
        this->_type = copy._type;
    }
    return *this;
}

void    Dog::makeSound(void)
{
    std::cout << "Wouf! Wouf!" << std::endl;
}