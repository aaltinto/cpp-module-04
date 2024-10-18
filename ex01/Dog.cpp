#include "Dog.hpp"
#include <iostream>

Dog::Dog( void )
{
    std::cout << "Dog default constructor called" << std::endl;
    this->brain = new Brain;
    this->type = "Dog";
}

Dog::Dog(Dog &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->brain = new Brain;
    *this->brain = *copy.brain;
    this->type = copy.type;
}

Dog::~Dog( void )
{
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog& copy)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    this->type = copy.type;
    this->brain = new Brain;
    *this->brain = *copy.brain;
    return *this;
}

void    Dog::makeSound( void ) const
{
    std::cout << this->getType() << " says woof woof" << std::endl;
}

void    Dog::setIdea(int i, std::string idea)
{
    if (i < 0 || i >= 100)
    {
        std::cout << "Index is out of range!" << std::endl;
        return;
    }
    this->brain->ideas[i] = idea;
}

std::string Dog::getIdea(int i) const
{
    if (i < 0 || i >= 100)
    {
        std::cout << "Index is out of range!" << std::endl;
        return "NULL";
    }
    return this->brain->ideas[i];
}

void Dog::printIdeas( int num )
{
    for (int i = 0; i < 5; i++)
        std::cout << "Idea " << i + 1 << " " << this->getIdea(i) << std::endl;
    if (num != 0)
    {
        std::cout << ".\n.\n." << std::endl;
    for (int i = num - 1; i <= num + 1; i++)
        std::cout << "Idea " << i + 1 << " " << this->getIdea(i) << std::endl;    
    }
    std::cout << ".\n.\n." << std::endl;
    for (int i = 98; i < 100; i++)
        std::cout << "Idea " << i + 1 << " " << this->getIdea(i) << std::endl;
}