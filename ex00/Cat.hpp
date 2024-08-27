#pragma once
#include "Animal.hpp"

class	Cat: public Animal
{
	public:
		Cat(std::string type = "Cat");
		Cat(Cat &copy);
		virtual ~Cat();
		Cat &operator=(Cat &copy);
		void	makeSound(void);
};