#include "CircleCreator.h"

std::shared_ptr<CircleCreator> CircleCreator::GetInstanse()
{
    if (!instance)
    {
        instance = std::shared_ptr<CircleCreator>(new CircleCreator());
    }

    return instance;
}

std::shared_ptr<CShape> CircleCreator::CreateShape(std::istream& in)
{
    sf::Vector2f center;
    double radius;
    char ch;

    in >> ch >> ch;
    in >> center.x;
    in >> ch;
    in >> center.y;

    in >> ch >> ch >> ch;
    in >> radius;

    return std::make_shared<CCircle>(center, radius);
}


std::shared_ptr<CircleCreator> CircleCreator::instance = nullptr;