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

}
void Blinky::Move(const Object::GamePosition& playerPos) {
};
}  // namespace Object
