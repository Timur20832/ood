#pragma once
#include "ShapesCreatorFactory.h"
#include "CRectangle.h"
class RectangleCreator : public ShapesCreatorFactory
{
public:
	static std::shared_ptr<RectangleCreator> GetInstanse();
	std::shared_ptr<CShape> CreateShape(std::istream& in) override;

private:
    RectangleCreator() = default;
    RectangleCreator(const RectangleCreator&) = delete;
    RectangleCreator& operator=(const RectangleCreator&) = delete;
    static std::shared_ptr<RectangleCreator> instance;
};

