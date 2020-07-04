#ifndef __BUTTON_H__
#define __BUTTON_H__

#include <string>
#include <iostream>

#include "Component.h"

namespace CompositePattern
{

    class Button : public Component
    {
    public:
        Button(const std::string &name)
            : Component(name)
        {
        }

        void print() override
        {
            std::cout << "print Button(" << name << ")" << std::endl;
        }
    };

} // namespace CompositePattern

#endif