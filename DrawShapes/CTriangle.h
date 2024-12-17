#pragma once
#include "CShape.h"
#include "Visitor.h"

class Visitor;

class CTriangle : public CShape
{
public:
	CTriangle(sf::Vector2f& vertex1, sf::Vector2f& vertex2, sf::Vector2f& vertex3);
	sf::Drawable& GetShape() override;
	float GetFirstSide();
	float GetSecondSide();
	float GetThirdSide();

	void Accept(Visitor& visitor) override;
private:
	sf::ConvexShape m_shape;
};