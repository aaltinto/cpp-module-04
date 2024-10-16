#pragma once

#include <string>

class Brain
{
    public:
        std::string ideas[100];
        Brain(void);
        Brain(Brain &copy);
        ~Brain(void);
        Brain &operator=(Brain *copy);
};