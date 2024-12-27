#include "Object/Inky.hpp"

namespace Object {

Inky::Inky() {
    this->pos={INKY_INITIAL_POS_X,INKY_INITIAL_POS_Y};
    this->state = std::make_shared<State::ChaseState>();
};

std::string Inky::GetName() const {
    return name;
};

Object::GamePosition Inky::GetPosition() const {
    return pos;
};

void Inky::SetState(Object::MonsterState s) {
    switch (s) {
    case Object::MonsterState::Chase:
        this->state = std::make_shared<State::ChaseState>();
        break;
    case Object::MonsterState::Scatter:
        this->state = std::make_shared<State::ScatterState>();
        break;
    }
}

void Inky::Move(const Object::GamePosition& playerPos) {
    switch (state) {
    case Object::MonsterState::Chase:
        if (playerPos.x != pos.x) {
            pos.x += ((playerPos.x+(playerPos.x - pos.x))-pos.x) / std::abs((playerPos.x+(playerPos.x - pos.x))-pos.x);
        }
        if (playerPos.y != pos.y) {
            pos.y += ((playerPos.y+(playerPos.y-pos.y))-pos.y) / std::abs((playerPos.x+(playerPos.x - pos.x))-pos.x);

        }
        pos.x = std::max(0, std::min(11, pos.x));
        pos.y = std::max(0, std::min(11, pos.y));
        break;
    case Object::MonsterState::Scatter:
        pos.x =11;
        pos.y =11;
        break;
    default:
        break;
    }
}
}  // namespace Object
