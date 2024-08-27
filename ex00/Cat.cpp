#include "Cat.hpp"
#include <iostream>

Cat::Cat(std::string type): Animal(type)
{
    std::cout << "Cat constructor called" << std::endl;
}
Cat::Cat(Cat &copy): Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    delete this;
}

Cat &Cat::operator=(Cat &copy)
{
    if (&copy != this)
    {
        std::cout << "Cat copy assaignment operator called" << std::endl;
        this->_type = copy._type;
    }
    return *this;
}

void    makeSound(void)
{
    std::cout << "Meow! Meow!" << std::endl;
}