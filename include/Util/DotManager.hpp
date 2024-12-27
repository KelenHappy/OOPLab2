#ifndef OOPLAB_DOTMANAGER_HPP
#define OOPLAB_DOTMANAGER_HPP

#include <algorithm>
#include <cstddef>
#include <iostream>
#include <memory>
#include <vector>
#include "Object/Dot.hpp"
#include "Object/GameObject.hpp"
#include "Object/Player.hpp"

namespace Util {
class DotManager {
    std::vector<std::shared_ptr<Object::Dot>> points;
    std::shared_ptr<Object::Player>           player;

public:
    DotManager(
        std::shared_ptr<Object::Player>   player
    );

    ~DotManager();

    std::vector<std::shared_ptr<Object::Dot>> GetPointList();

    std::size_t GetPointListSize();

    bool IsOverlapping();
};
}  // namespace Util

#endif  // OOPLAB_DOTMANAGER_HPP
