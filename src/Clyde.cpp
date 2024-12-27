#include "Object/Clyde.hpp"
#include "State/ChaseState.hpp"
#include "State/ScatterState.hpp"
#include <stdlib.h>
#include <cstdlib>
namespace Object {

Clyde::Clyde() {
    this->pos={CLYDE_INITIAL_POS_X,CLYDE_INITIAL_POS_Y};
    this->state=std::make_shared<State::ChaseState>();
};

std::string Clyde::GetName() const {
    return  name;
};

Object::GamePosition Clyde::GetPosition() const {
    return pos;
};

void Clyde::SetState(Object::MonsterState s) {
    switch (s) {
    case Object::MonsterState::Chase:
        this->state = std::make_shared<State::ChaseState>();
        break;
    case Object::MonsterState::Scatter:
        this->state = std::make_shared<State::ScatterState>();
        break;
    }
}

void Clyde::Move(const Object::GamePosition& playerPos) {
    this->pos = state->Behavior(GhostType::CLYDE, pos, playerPos);
    /*switch (this->state) {
    case Object::MonsterState::Chase:
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
        break;
    case Object::MonsterState::Scatter:
        pos.x =11;
        pos.y = 0;
        break;
    default:
        break;
    }*/
}
}  // namespace Object
