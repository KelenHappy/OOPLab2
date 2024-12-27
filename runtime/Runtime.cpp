#include <iostream>
#include <memory>
#include <vector>
#include "Interface/MonsterMovable.hpp"
#include "Object/GameObject.hpp"
#include "Util/Map.hpp"
#include "Util/RuntimeFramework.hpp"

namespace Util {

void RuntimeFramework::Initial() {
    game_objects.push_back(player);
    game_objects.push_back(blinky);
    game_objects.push_back(clyde);
    game_objects.push_back(inky);
    game_objects.push_back(pinky);
    

}

void RuntimeFramework::Running() {
    char direction;
    std::cin >> direction;
    player->Move(direction);
    blinky->Move(player->GetPosition()); 
    clyde->Move(player->GetPosition());
    inky->Move(player->GetPosition());
    pinky->Move(player->GetPosition());
    if (player->GetPosition() == blinky->GetPosition() || player->GetPosition() == clyde->GetPosition() || player->GetPosition() == inky->GetPosition()
    || player->GetPosition() == pinky->GetPosition()) {  // player point
        RuntimeFramework::End();  
    }
}

void RuntimeFramework::Render() { //using Draw()
    Map::Draw(game_objects);
}

void RuntimeFramework::End() {
    state = RuntimeState::END;
}
};  // namespace Util
