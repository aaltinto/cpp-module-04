#pragma once
#include "Animal.hpp"

class	Dog: public Animal
{
	public:
		Dog(std::string type = "Dog");
		Dog(Dog &copy);
		virtual ~Dog();
		Dog &operator=(Dog &copy);
		void	makeSound(void);
};