#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat( void );
        Cat(Cat &copy);
        virtual ~Cat( void );
        Cat &operator=(Cat &copy);
        void makeSound( void ) const;
        void setIdea(int i, std::string idea = "NULL");
        std::string getIdea(int i) const;
        void printIdeas( int i = 0 );
};