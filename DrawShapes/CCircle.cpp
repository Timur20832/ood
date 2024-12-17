#include "CCircle.h"

CCircle::CCircle(const sf::Vector2f& centerPoint, float radius)
{
	m_shape.setRadius(radius);
	m_shape.setPosition(centerPoint.x - radius, centerPoint.y - radius);
	m_shape.setFillColor(sf::Color::Blue);
}

sf::Drawable& CCircle::GetShape()
{
	return m_shape;
}

float CCircle::GetRadius() const
{
	return m_shape.getRadius();
}

void CCircle::Accept(Visitor& visitor)
{
	visitor.Visit(*this);
}
