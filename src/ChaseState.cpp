#include "State/ChaseState.hpp"
#include "iostream"
#include <cstdlib>
namespace State {
Object::GamePosition ChaseState::Behavior(
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
}}




bool ChaseState::IsOutRange(Object::GamePosition pos) {
    return true;
}

Object::GamePosition ChaseState::Blinky(
    Object::GamePosition pos,
    Object::GamePosition playerPos
) {
    if (playerPos.x != pos.x) {
        pos.x += (playerPos.x - pos.x) / std::abs(playerPos.x - pos.x);
    }
    if (playerPos.y != pos.y) {
        pos.y += (playerPos.y - pos.y) / std::abs(playerPos.y - pos.y);
    }
    pos.x = std::max(0, std::min(11, pos.x));
    pos.y = std::max(0, std::min(11, pos.y));
    return pos;
}

Object::GamePosition ChaseState::Clyde(
    Object::GamePosition pos,
    Object::GamePosition playerPos
) {
    if(abs(playerPos.x-pos.x)<5&&abs(playerPos.y-pos.y)<5) {
        if (playerPos.x != pos.x) {
            pos.x += (playerPos.x - pos.x) / std::abs(playerPos.x - pos.x);
        }
        if (playerPos.y != pos.y) {
            pos.y += (playerPos.y - pos.y) / std::abs(playerPos.y - pos.y);
        }
    }
    else {
        pos.x+=(std::rand()%3)-1;
        pos.y+=(std::rand()%3)-1;
    }
    pos.x = std::max(0, std::min(11, pos.x));
    pos.y = std::max(0, std::min(11, pos.y));
    return pos;
}

Object::GamePosition ChaseState::Inky(
    Object::GamePosition pos,
    Object::GamePosition playerPos
) {
    if (playerPos.x != pos.x) {
        pos.x += ((playerPos.x+(playerPos.x - pos.x))-pos.x) / std::abs((playerPos.x+(playerPos.x - pos.x))-pos.x);
    }
    if (playerPos.y != pos.y) {
        pos.y += ((playerPos.y+(playerPos.y-pos.y))-pos.y) / std::abs((playerPos.x+(playerPos.x - pos.x))-pos.x);

    }
    pos.x = std::max(0, std::min(11, pos.x));
    pos.y = std::max(0, std::min(11, pos.y));
}

Object::GamePosition ChaseState::Pinky(
    Object::GamePosition pos,
    Object::GamePosition playerPos
) {
    if (playerPos.x != pos.x) {
        pos.x += (playerPos.x+4 - pos.x) / std::abs(playerPos.x+4 - pos.x);
    }
    if (playerPos.y != pos.y) {
        pos.y += (playerPos.y+ - pos.y) / std::abs(playerPos.y - pos.y);

    }
    pos.x = std::max(0, std::min(11, pos.x));
    pos.y = std::max(0, std::min(11, pos.y));
}
}  // namespace State
