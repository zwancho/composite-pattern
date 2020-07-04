#ifndef __WINFORM_H__
#define __WINFORM_H__

#include <string>
#include <iostream>

#include "Container.h"

namespace CompositePattern
{

    class WinForm : public Container
    {
    public:
        WinForm(const std::string &name)
            : Container(name)
        {
        }

        void print() override
        {
            std::cout << "print WinForm(" << name << ")" << std::endl;
            Container::print();
        }
    };

} // namespace CompositePattern

#endif