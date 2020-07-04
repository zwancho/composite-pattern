#ifndef __TEXTBOX_H__
#define __TEXTBOX_H__

#include <string>
#include <iostream>

#include "Component.h"

namespace CompositePattern
{

    class TextBox : public Component
    {
    public:
        TextBox(const std::string &name)
            : Component(name)
        {
        }

        void print() override
        {
            std::cout << "print TextBox(" << name << ")" << std::endl;
        }
    };

} // namespace CompositePattern

#endif