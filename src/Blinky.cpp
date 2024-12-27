#include "Object/Blinky.hpp"
#include "State/ChaseState.hpp"
#include "State/ScatterState.hpp"

namespace Object {

Blinky::Blinky() {
    this->pos = {BLINKY_INITIAL_POS_X, BLINKY_INITIAL_POS_Y};
    this->state = std::make_shared<State::ChaseState>();
}

std::string Blinky::GetName() const {
    return name;
};

Object::GamePosition Blinky::GetPosition() const {
    return pos;
};

void Blinky::SetState(Object::MonsterState s) {
    switch (s) {
    case Object::MonsterState::Chase:
        this->state = std::make_shared<State::ChaseState>();
        break;
    case Object::MonsterState::Scatter:
        this->state = std::make_shared<State::ScatterState>();
        break;
    }

}
void Blinky::Move(const Object::GamePosition& playerPos) {
    switch(state) {
    case MonsterState::Chase:
        if (playerPos.x != pos.x) {
            pos.x += (playerPos.x - pos.x) / std::abs(playerPos.x - pos.x);
        }
        if (playerPos.y != pos.y) {
            pos.y += (playerPos.y - pos.y) / std::abs(playerPos.y - pos.y);

        }

        pos.x = std::max(0, std::min(11, pos.x));
        pos.y = std::max(0, std::min(11, pos.y));
        break;
    case MonsterState::Scatter:
        pos.x =0;
        pos.y = 0;
        break;
    default:
        break;
    }
};
}  // namespace Object
