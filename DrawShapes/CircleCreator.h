#pragma once
#include "ShapesCreatorFactory.h"
#include "CCircle.h"
class CircleCreator : public ShapesCreatorFactory
{
public:
    static std::shared_ptr<CircleCreator> GetInstanse();
    std::shared_ptr<CShape> CreateShape(std::istream& in) override;
private:
    CircleCreator() = default;
    CircleCreator(const CircleCreator&) = delete;
    CircleCreator& operator=(const CircleCreator&) = delete;
    static std::shared_ptr<CircleCreator> instance;
};




