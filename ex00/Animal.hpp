#pragma once

#include <string>

class Animal
{
    protected:
        std::string _type;
    public:
		Animal(std::string type = "Animal");
		Animal(Animal &copy);
		virtual ~Animal();
		Animal &operator=(Animal &copy);
        void	makeSound(void);
		std::string	getType(void);
};