#pragma once
#include "CShape.h"

class CShapeDecorator : public CShape
{
public:
	CShapeDecorator(CShape* shape);

	sf::Drawable& GetShape() override;


protected:
	CShape* m_shape;
};