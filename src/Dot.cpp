#include "Object/Dot.hpp"

namespace Object {

Dot::Dot(Object::GamePosition pos)
     {  // Initialize position and set points to 10 (you can change this value)
    this->pos=pos;
}
uint8_t Dot::GetPoint() {
    return 10;// Returns the points associated with the dot
}

std::string Dot::GetName() const {
    return "d";  // Return the name of the dot
}

Object::GamePosition Dot::GetPosition() const {
    return pos;  // Return the dot's position
}

}  // namespace Object
