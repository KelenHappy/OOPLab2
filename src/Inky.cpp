#include "Object/Inky.hpp"

namespace Object {

Inky::Inky() {
};

std::string Inky::GetName() const {
};

Object::GamePosition Inky::GetPosition() const {
};

void Inky::SetState(Object::MonsterState s) {
}

void Inky::Move(const Object::GamePosition& playerPos) {
}
}  // namespace Object
