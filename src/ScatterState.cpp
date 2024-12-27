#include "State/ScatterState.hpp"
#include "Object/GameObject.hpp"

namespace State {
Object::GamePosition ScatterState::Behavior(
    GhostType            type,
    Object::GamePosition pos,
    Object::GamePosition playerPos
) {
};

Object::GamePosition ScatterState::Blinky(
    Object::GamePosition pos,
    Object::GamePosition playerPos
) {
}

Object::GamePosition ScatterState::Clyde(
    Object::GamePosition pos,
    Object::GamePosition playerPos
) {
}

Object::GamePosition ScatterState::Inky(
    Object::GamePosition pos,
    Object::GamePosition playerPos
) {
}

Object::GamePosition ScatterState::Pinky(
    Object::GamePosition pos,
    Object::GamePosition playerPos
) {
}
}  // namespace State
