#include "Cat.hpp"
#include <iostream>

Cat::Cat( void )
{
    std::cout << "Cat default constructor called" << std::endl;
    this->brain = new Brain;
    this->type = "Cat";
}

Cat::Cat(Cat &copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = new Brain;
    *this->brain = *copy.brain;
    this->type = copy.type;
}

Cat::~Cat( void )
{
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat& copy)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    this->brain = new Brain();
    *this->brain = *copy.brain;
    this->type = copy.type;
    return *this;
}

void    Cat::makeSound( void ) const
{
    std::cout << this->getType() << " says meow meow" << std::endl;
}

void    Cat::setIdea(int i, std::string idea)
{
    if (i < 0 || i >= 100)
    {
        std::cout << "Index is out of range!" << std::endl;
        return;
    }
    this->brain->ideas[i] = idea;
}

std::string Cat::getIdea(int i) const
{
    if (i < 0 || i >= 100)
    {
        std::cout << "Index is out of range!" << std::endl;
        return "NULL";
    }
    return this->brain->ideas[i];
}

void Cat::printIdeas( int num )
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