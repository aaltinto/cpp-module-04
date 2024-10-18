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
        {
            newAnimals[i] = new Dog();
            if (newAnimals[i] == NULL)
            {
                std::cerr << "An allocation error accured" << std::endl;
                for (int ind = i; ind != 0; ind--)
                    delete newAnimals[ind];
                exit (1);
            }
        }
        else
        {
            newAnimals[i] = new Cat();
            if (newAnimals[i] == NULL)
            {
                std::cerr << "An allocation error accured" << std::endl;
                for (int ind = i; ind != 0; ind--)
                    delete newAnimals[ind];
                exit (1);
            }
        }
    }

    Dog *a = new Dog();
    std::cout << "Ideas of Cat a\n" << std::endl;
    a->printIdeas();
    Dog *b = new Dog(*a);
    b->setIdea(2, "another idea");
    std::cout << "\nIdeas of Cat a\n" << std::endl;
    a->printIdeas();
    std::cout << "\nIdeas of Cat b\n" << std::endl;
    b->printIdeas();
    delete a;
    delete b;
    for (int i = 0; i < 6; i++)
        delete newAnimals[i];
}