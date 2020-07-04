#ifndef __LABEL_H__
#define __LABEL_H__

#include <string>
#include <iostream>

#include "Component.h"

namespace CompositePattern
{

    class Label : public Component
    {
    public:
        Label(const std::string &name)
            : Component(name)
        {
        }

        void print() override
        {
            std::cout << "print Label(" << name << ")" << std::endl;
        }
    };

} // namespace CompositePattern

#endif