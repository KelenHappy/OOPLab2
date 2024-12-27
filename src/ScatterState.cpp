#include "State/ScatterState.hpp"
#include "Object/GameObject.hpp"

namespace State {
Object::GamePosition ScatterState::Behavior(
    GhostType            type,
    Object::GamePosition pos,
    Object::GamePosition playerPos
) {
    switch (type) {
    case GhostType::BLINKY:
        return Blinky(pos, playerPos);
        break;

    case GhostType::CLYDE:
        return Clyde(pos, playerPos);
        break;
    case GhostType::INKY:
        return Inky(pos, playerPos);
        break;
    case GhostType::PINKY:
        return Pinky(pos, playerPos);
        break;
    default:
        return pos;
    }
};

Object::GamePosition ScatterState::Blinky(
    Object::GamePosition pos,
    Object::GamePosition playerPos
) {
    return pos={0,0};

}

Object::GamePosition ScatterState::Clyde(
    Object::GamePosition pos,
    Object::GamePosition playerPos
) {
    return pos={11,0};
}

Object::GamePosition ScatterState::Inky(
    Object::GamePosition pos,
    Object::GamePosition playerPos
) {
   return pos={11,11};
}

Object::GamePosition ScatterState::Pinky(
    Object::GamePosition pos,
    Object::GamePosition playerPos
) {
   return pos={0,11};
}
}  // namespace State
