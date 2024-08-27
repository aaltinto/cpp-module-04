#include "Animal.hpp"
#include <iostream>

Animal::Animal(std::string type): _type(type)
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    delete this;
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->_type = copy._type;
}

Animal &Animal::operator=(Animal &copy)
{
    std::cout << "Animal copy assaignment operator called" << std::endl;
    this->_type = copy._type;
}

void    Animal::makeSound(void)
{
    std::cout << "Animal base class has no sound!" << std::endl;
}

std::string    Animal::getType(void)
{
    return this->_type;
}
