#ifndef __CHECKBOX_H__
#define __CHECKBOX_H__

#include <string>
#include <iostream>

#include "Component.h"

namespace CompositePattern
{

    class CheckBox : public Component
    {
    public:
        CheckBox(const std::string &name)
            : Component(name)
        {
        }

        void print() override
        {
            std::cout << "print CheckBox(" << name << std::endl;
        }
    };

} // namespace CompositePattern

#endif