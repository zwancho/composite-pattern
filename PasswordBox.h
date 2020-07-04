#ifndef __PASSWORDBOX_H__
#define __PASSWORDBOX_H__

#include <string>
#include <iostream>

#include "TextBox.h"

namespace CompositePattern
{

    class PasswordBox : public TextBox
    {
    public:
        PasswordBox(const std::string &name)
            : TextBox(name)
        {
        }

        void print() override
        {
            std::cout << "print PasswordBox(" << name << ")" << std::endl;
        }
    };

} // namespace CompositePattern

#endif