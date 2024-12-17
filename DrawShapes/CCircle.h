#pragma once
#include "CShape.h"
#include <cmath>
#include "Visitor.h"

class CCircle : public CShape
{
public:
	CCircle(const sf::Vector2f &centerPoint, float radius);
	sf::Drawable &GetShape() override;
	float GetRadius() const;

	void Accept(Visitor& visitor) override;

private:
	sf::CircleShape m_shape;
};