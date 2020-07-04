#ifndef __PICTURE_H__
#define __PICTURE_H__

#include <string>
#include <iostream>

#include "Component.h"

namespace CompositePattern
{

    class Picture : public Component
    {
    public:
        Picture(const std::string &name)
            : Component(name)
        {
        }

        void print() override
        {
            std::cout << "print Picture(" << name << ")" << std::endl;
        }
    };

} // namespace CompositePattern

#endif