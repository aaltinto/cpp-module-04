#include "Brain.hpp"
#include <iostream>

Brain::Brain( void )
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "idea";
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( Brain &copy )
{
    for (int i = 0; i < 100; i++)
        this->ideas[i].assign(copy.ideas[i]);
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain( void )
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain *copy)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i].assign(copy->ideas[i]);
    std::cout << "Brain copy assignment operator called" << std::endl;
    return *this;
}
