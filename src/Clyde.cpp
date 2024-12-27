#include "Object/Clyde.hpp"
#include "State/ChaseState.hpp"
#include "State/ScatterState.hpp"

namespace Object {

Clyde::Clyde() {
};

std::string Clyde::GetName() const {
};

Object::GamePosition Clyde::GetPosition() const {
};

void Clyde::SetState(Object::MonsterState s) {
}

void Clyde::Move(const Object::GamePosition& playerPos) {
}
}  // namespace Object
