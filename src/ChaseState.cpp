#include "State/ChaseState.hpp"
#include "iostream"
namespace State {
Object::GamePosition ChaseState::Behavior(
    GhostType            type,
    Object::GamePosition pos,
    Object::GamePosition playerPos
) {
    
}

bool ChaseState::IsOutRange(Object::GamePosition pos) {
}

Object::GamePosition ChaseState::Blinky(
    Object::GamePosition pos,
    Object::GamePosition playerPos
) {
}

Object::GamePosition ChaseState::Clyde(
    Object::GamePosition pos,
    Object::GamePosition playerPos
) {
}

Object::GamePosition ChaseState::Inky(
    Object::GamePosition pos,
    Object::GamePosition playerPos
) {
}

Object::GamePosition ChaseState::Pinky(
    Object::GamePosition pos,
    Object::GamePosition playerPos
) {
}
}  // namespace State
