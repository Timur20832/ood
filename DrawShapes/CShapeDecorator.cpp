#include "CShapeDecorator.h"

CShapeDecorator::CShapeDecorator(CShape* shape) : m_shape(shape) {}

sf::Drawable& CShapeDecorator::GetShape()
{
    return m_shape->GetShape();
}
