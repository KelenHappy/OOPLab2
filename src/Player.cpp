#include "Object/Player.hpp"
#include "Object/GameObject.hpp"
#include <iostream>
namespace Object {

std::string Player::GetName() const {
    return name;
}

Object::GamePosition Player::GetPosition() const {
    return pos;
};

void Player::Move(char direction) {
    
    switch (direction) {
            case 'w':
            case 'W':
                //setPosition(position.x -3, position.y );  // 向上移動
                pos.y += 1;               
                break;
            case 'a':
            case 'A':
                //setPosition(position.x , position.y -3);  // 向左移動
                pos.x -= 1;
                break;
            case 's':
            case 'S':
                //setPosition(position.x + 3, position.y );  // 向下移動
                pos.y -= 1;
                break;
            case 'd':
            case 'D':
                //setPosition(position.x, position.y +3);  // 向右移動
                pos.x += 1;
                break;
            default:
                break;  // 不處理其他字符
    }
     if(IsOutRange()){
        pos.x = 12;
        pos.y = 12;
    }
}

bool Player::IsOutRange() {
    if(pos.x > 12 || pos.y > 12) return true;
    else return false;
}

}  // namespace Object
