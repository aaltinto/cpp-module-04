#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main( void )
{
    Animal *newAnimals[6];
    for (int i = 0; i < 6; i++)
    {
        if (i < 3)
            newAnimals[i] = new Dog();
        else
            newAnimals[i] = new Cat();
    }
    for (int i = 0; i < 6; i++)
        delete newAnimals[i];

    Cat *a = new Cat;
    std::cout << "Ideas of Cat a\n" << std::endl;
    a->printIdeas();
    Cat *b = new Cat(*a);
    b->setIdea(2, "another idea");
    std::cout << "\nIdeas of Cat a\n" << std::endl;
    a->printIdeas();
    std::cout << "\nIdeas of Cat b\n" << std::endl;
    b->printIdeas();
    delete a;
    delete b;
}