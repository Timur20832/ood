#pragma once
#include "CShape.h"
#include "Visitor.h"

class CRectangle : public CShape
{
public:
	CRectangle(sf::Vector2f& leftTopPoint, sf::Vector2f& rightBottomPoint);
	sf::Drawable& GetShape() override;
	sf::Vector2f GetSize();

	void Accept(Visitor& visitor) override;
private:
	sf::RectangleShape m_shape;
};

