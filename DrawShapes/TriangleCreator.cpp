#include "TriangleCreator.h"

std::shared_ptr<TriangleCreator> TriangleCreator::GetInstance()
{
    if (instance == nullptr)
    {
        instance = std::shared_ptr<TriangleCreator>(new TriangleCreator());
    }

    return instance;
}

std::shared_ptr<CShape> TriangleCreator::CreateShape(std::istream& in)
{
    sf::Vector2f p1, p2, p3;
    char ch;

    in >> ch >> ch >> ch;
    in >> p1.x;
    in >> ch;
    in >> p1.y;

    in >> ch >> ch >> ch >> ch;
    in >> p2.x;
    in >> ch;
    in >> p2.y;

    in >> ch >> ch >> ch >> ch;
    in >> p3.x;
    in >> ch;
    in >> p3.y;

    return std::make_shared<CTriangle>(p1, p2, p3);
}

std::shared_ptr<TriangleCreator> TriangleCreator::instance = nullptr;