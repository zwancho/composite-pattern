#ifndef __COMPONENT_H__
#define __COMPONENT_H__

#include <string>

namespace CompositePattern
{

    class Component
    {
    protected:
        std::string name;

    public:
        Component(const std::string &name)
            : name(name)
        {
        }

        virtual void print() = 0;
    };

} // namespace CompositePattern

#endif