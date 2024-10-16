#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain   *brain;
    public:
        Dog( void );
        Dog(Dog &copy);
        ~Dog( void );
        Dog &operator=(Dog &copy);
        void makeSound( void ) const;
        void setIdea(int i, std::string idea = "NULL");
        std::string getIdea(int i) const;
        void printIdeas( int i = 0 );
};