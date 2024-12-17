#include "RectangleCreator.h"

std::shared_ptr<RectangleCreator> RectangleCreator::GetInstanse()
{
    if (instance == nullptr)
    {
        instance = std::shared_ptr<RectangleCreator>(new RectangleCreator());
    }

    return instance;
}

std::shared_ptr<CShape> RectangleCreator::CreateShape(std::istream& in)
{
    sf::Vector2f firstPoint, secondPoint;
    char ch;

    in >> ch >> ch >> ch;
    in >> firstPoint.x;
    in >> ch;
    in >> firstPoint.y;

    in >> ch >> ch >> ch >> ch;
    in >> secondPoint.x;
    in >> ch;
    in >> secondPoint.y;

    return std::make_shared<CRectangle>(firstPoint, secondPoint);
}

std::shared_ptr<RectangleCreator> RectangleCreator::instance = nullptr;