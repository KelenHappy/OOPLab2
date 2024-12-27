#include "Object/Pinky.hpp"

namespace Object {

Pinky::Pinky() {
};

std::string Pinky::GetName() const {
};

Object::GamePosition Pinky::GetPosition() const {
};

void Pinky::SetState(Object::MonsterState s) {
}

void Pinky::Move(const Object::GamePosition& playerPos) {
}
}  // namespace Object
