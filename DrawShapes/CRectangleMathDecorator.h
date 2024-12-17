#pragma once
#include "CMathDecorator.h"
#include "CRectangle.h"
class CRectangleMathDecorator : public CMathDecorator
{
public:
	CRectangleMathDecorator(CShape* shape) : CMathDecorator(shape) {}
	CRectangleMathDecorator() : CMathDecorator(nullptr) {}

	float GetArea() override;
	float GetPerimeter() override;
};

