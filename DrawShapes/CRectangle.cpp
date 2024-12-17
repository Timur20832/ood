#include "CRectangle.h"


CRectangle::CRectangle(sf::Vector2f& leftTopPoint, sf::Vector2f& rightBottomPoint)
{
	sf::Vector2f size(rightBottomPoint.x - leftTopPoint.x, rightBottomPoint.y - leftTopPoint.y);
	m_shape.setSize(size);
	m_shape.setPosition(leftTopPoint);
	m_shape.setFillColor(sf::Color::Red);
}

sf::Drawable& CRectangle::GetShape()
{
	return m_shape;
}

sf::Vector2f CRectangle::GetSize()
{
	return m_shape.getSize();
}

void CRectangle::Accept(Visitor& visitor)
{
	visitor.Visit(*this);
}

