#include "Object/Inky.hpp"

namespace Object {

Inky::Inky() {
};

std::string Inky::GetName() const {
    return "Inky";
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
}
}  // namespace Object
