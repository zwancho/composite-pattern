#ifndef __LINKLABEL_H__
#define __LINKLABEL_H__

#include <string>
#include <iostream>

#include "Label.h"

namespace CompositePattern
{

    class LinkLabel : public Label
    {
    public:
        LinkLabel(const std::string &name)
            : Label(name)
        {
        }

        void print() override
        {
            std::cout << "print LinkLabel(" << name << ")" << std::endl;
        }
    };

} // namespace CompositePattern

#endif