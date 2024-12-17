#pragma once
#include "CShape.h"
#include <memory>
class ShapesCreatorFactory
{
public:
	virtual ~ShapesCreatorFactory() = default;
	virtual std::shared_ptr<CShape> CreateShape(std::istream& in) = 0;
};

