#include "Object/Blinky.hpp"
#include "State/ChaseState.hpp"
#include "State/ScatterState.hpp"

namespace Object {

Blinky::Blinky() {}

std::string Blinky::GetName() const {
    return "Blinky";
};

Object::GamePosition Blinky::GetPosition() const {
    return Object::GamePosition{};
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
    switch (state) {
    case Object::MonsterState::Chase:

        break;
    case Object::MonsterState::Scatter:
        pos.x =0;
        pos.y = 0;
        break;
    }
};
}  // namespace Object
