#ifndef __FRAME_H__
#define __FRAME_H__

#include <string>
#include <iostream>

#include "WinForm.h"

namespace CompositePattern
{

    class Frame : public WinForm
    {
    public:
        Frame(const std::string &name)
            : WinForm(name)
        {
        }

        void print() override
        {
            std::cout << "print Frame(" << name << ")" << std::endl;
            Container::print();
        }
    };

} // namespace CompositePattern

#endif