#ifndef OOPLAB_DOT_HPP
#define OOPLAB_DOT_HPP

#include "GameObject.hpp"
#include "Interface/GetPointer.hpp"

namespace Object {
class Dot : public Object::GetPointer,
            public Object::GameObject {Object::GamePosition position;

public:
    Object::GamePosition pos={0,0};
    Dot(Object::GamePosition pos);
    uint8_t GetPoint() override;

    ~Dot() = default;

    std::string GetName() const override;

    Object::GamePosition GetPosition() const override;
};
}  // namespace Object

#endif  // OOPLAB_DOT_HPP
