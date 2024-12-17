#pragma once
#include "CMathDecorator.h"
#include "CCircle.h"
class CCircleMathDecorator : public CMathDecorator
{
public:
	CCircleMathDecorator(CShape* shape) : CMathDecorator(shape) {}
	CCircleMathDecorator() : CCircleMathDecorator(nullptr) {}

	float GetArea() override;
	float GetPerimeter() override;
};

