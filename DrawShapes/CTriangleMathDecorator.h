#pragma once
#include "CMathDecorator.h"
#include "CTriangle.h"
class CTriangleMathDecorator : public CMathDecorator
{
public:
	CTriangleMathDecorator(CShape* shape) : CMathDecorator(shape) {}
	CTriangleMathDecorator() : CMathDecorator(nullptr) {}

	float GetArea() override;
	float GetPerimeter() override;
};