#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main( void )
{
    Cat a;
    Cat b(a);
    a = b;

    Dog c;
    Dog d(c);
    c = d;

    a.makeSound();
    b.makeSound();
    c.makeSound();
    d.makeSound();
}