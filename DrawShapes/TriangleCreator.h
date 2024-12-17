#pragma once
#include "ShapesCreatorFactory.h"
#include "CTriangle.h"

class TriangleCreator : public ShapesCreatorFactory
{
public:
    static std::shared_ptr<TriangleCreator> GetInstance();
    std::shared_ptr<CShape> CreateShape(std::istream& in) override;

private:
    TriangleCreator() = default;
    TriangleCreator(const TriangleCreator&) = delete;
    TriangleCreator& operator=(const TriangleCreator&) = delete;
    static std::shared_ptr<TriangleCreator> instance;
};

