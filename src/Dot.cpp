#include "Object/Dot.hpp"

namespace Object {

Dot::Dot(Object::GamePosition pos)
    : position(pos) {  // Initialize position and set points to 10 (you can change this value)
    this->position.x = pos.x;
    this->position.x = pos.y;
}

uint8_t Dot::GetPoint() {
    return 10;// Returns the points associated with the dot
}

std::string Dot::GetName() const {
    return "d";  // Return the name of the dot
}

Object::GamePosition Dot::GetPosition() const {
    return position;  // Return the dot's position
}

}  // namespace Object
