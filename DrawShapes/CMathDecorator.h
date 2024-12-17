#pragma once
#include "CShapeDecorator.h"
class CMathDecorator : public CShapeDecorator
{
public:
	CMathDecorator(CShape* shape) : CShapeDecorator(shape) {}

	virtual float GetPerimeter() = 0;
	virtual float GetArea() = 0;
	virtual ~CMathDecorator() = default;
};

