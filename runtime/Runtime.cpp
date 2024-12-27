#include <iostream>
#include <memory>
#include <vector>
#include "Interface/MonsterMovable.hpp"
#include "Object/GameObject.hpp"
#include "Util/Map.hpp"
#include "Util/RuntimeFramework.hpp"

namespace Util {


void RuntimeFramework::Initial() {
    std::vector<Object::GamePosition> initial_points = {
        {2, 8}, {9, 9}, {8, 3}, {5, 7}
    };
    game_objects.push_back(player);
    game_objects.push_back(blinky);
    game_objects.push_back(clyde);
    game_objects.push_back(inky);
    game_objects.push_back(pinky);
    //auto points = point_manager->GetPointList();
    //game_objects.insert(game_objects.end(), points.begin(), points.end());
    

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
        Map::Draw(game_objects);
        RuntimeFramework::End();  
    }
   /* if(point_manager->IsOverlapping()){
        RuntimeFramework::End();
    }*/
}

void RuntimeFramework::Render() { //using Draw()
    Map::Draw(game_objects);
}

void RuntimeFramework::End() {
    state = RuntimeState::END;
}
};  // namespace Util
