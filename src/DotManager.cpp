#include "Util/DotManager.hpp"
#include  "Object/Dot.hpp"

namespace Util {
DotManager::DotManager(std::shared_ptr<Object::Player>   player) {
    this->player = player;

    std::shared_ptr<Object::Dot> DT1 = std::make_shared<Object::Dot>(Object::GamePosition{2, 8});
    std::shared_ptr<Object::Dot> DT2 = std::make_shared<Object::Dot>(Object::GamePosition{9, 9});
    std::shared_ptr<Object::Dot> DT3 = std::make_shared<Object::Dot>(Object::GamePosition{8, 3});
    std::shared_ptr<Object::Dot> DT4 = std::make_shared<Object::Dot>(Object::GamePosition{5, 7});
    points.push_back(DT1);
    points.push_back(DT2);
    points.push_back(DT3);
    points.push_back(DT4);
};

DotManager::~DotManager() = default;

std::vector<std::shared_ptr<Object::Dot>> DotManager::GetPointList() {
    return points;
}

std::size_t DotManager::GetPointListSize() {
    return points.size();
}

bool DotManager::IsOverlapping() {
    for (auto& point : points) {
        if (point->GetPosition().x == player->GetPosition().x
            && point->GetPosition().y == player->GetPosition().y) {
            points.erase(
                std::remove(points.begin(), points.end(), point),
                points.end()
            );
            return true;
        }
    }
    return false;
}
}  // namespace Util
