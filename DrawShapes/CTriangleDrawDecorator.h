#pragma once
#include "CTriangle.h"
#include "CDrawDecorator.h"
class CTriangleDrawDecorator : public CDrawDecorator
{
public:
	CTriangleDrawDecorator(CShape* shape) : CDrawDecorator(shape) {}
	CTriangleDrawDecorator() : CDrawDecorator(nullptr) {}

	void Draw(sf::RenderWindow& window) override;
};

