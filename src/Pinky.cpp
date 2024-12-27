#include "Object/Pinky.hpp"

namespace Object {

Pinky::Pinky() {
    this->pos={PINKY_INITIAL_POS_X,PINKY_INITIAL_POS_Y};
    this->state = std::make_shared<State::ChaseState>();

};

std::string Pinky::GetName() const {
    return name;
};

Object::GamePosition Pinky::GetPosition() const {
    return pos;
};

void Pinky::SetState(Object::MonsterState s) {
    switch (s) {
    case Object::MonsterState::Chase:
        this->state = std::make_shared<State::ChaseState>();
        break;
    case Object::MonsterState::Scatter:
        this->state = std::make_shared<State::ScatterState>();
        break;
    }
}

void Pinky::Move(const Object::GamePosition& playerPos) {
    this->pos = state->Behavior(GhostType::PINKY, pos, playerPos);
    /*switch (state) {
    case Object::MonsterState::Chase:
        if (playerPos.x != pos.x) {
            pos.x += (playerPos.x+4 - pos.x) / std::abs(playerPos.x+4 - pos.x);
        }
        if (playerPos.y != pos.y) {
            pos.y += (playerPos.y+ - pos.y) / std::abs(playerPos.y - pos.y);

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
    }*/
}
}  // namespace Object
