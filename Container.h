#ifndef __CONTAINER_H__
#define __CONTAINER_H__

#include <list>
#include <memory>

#include "Component.h"

namespace CompositePattern
{

    class Container : public Component
    {
    protected:
        std::list<std::shared_ptr<Component>> children;

    public:
        Container(const std::string &name)
            : Component(name)
        {
        }

        void add(std::shared_ptr<Component> &child)
        {
            children.push_back(child);
        }

        void add(std::shared_ptr<Component> &&child)
        {
            children.push_back(child);
        }

        void print() override
        {
            for (auto &child : children)
            {
                child->print();
            }
        }
    };

} // namespace CompositePattern

#endif