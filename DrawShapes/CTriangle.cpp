#include "CTriangle.h"

CTriangle::CTriangle(sf::Vector2f& vertex1, sf::Vector2f& vertex2, sf::Vector2f& vertex3)
	:m_shape(3)
{
	m_shape.setPoint(0, vertex1);
	m_shape.setPoint(1, vertex2);
	m_shape.setPoint(2, vertex3);
	m_shape.setFillColor(sf::Color::Green);
}

sf::Drawable& CTriangle::GetShape()
{
	return m_shape;
}

float CTriangle::GetFirstSide()
{
	return sqrt(pow((m_shape.getPoint(1).x - m_shape.getPoint(0).x), 2) + pow((m_shape.getPoint(1).y - m_shape.getPoint(0).y), 2.f));
}

float CTriangle::GetSecondSide()
{
	return sqrt(pow((m_shape.getPoint(2).x - m_shape.getPoint(0).x), 2) + pow((m_shape.getPoint(2).y - m_shape.getPoint(0).y), 2.f));
}

float CTriangle::GetThirdSide()
{
	return sqrt(pow((m_shape.getPoint(2).x - m_shape.getPoint(1).x), 2) + pow((m_shape.getPoint(2).y - m_shape.getPoint(1).y), 2.f));
}

void CTriangle::Accept(Visitor& visitor)
{
	visitor.Visit(*this);
}

