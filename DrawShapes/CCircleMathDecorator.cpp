#include "CCircleMathDecorator.h"
#include "CCircle.h"
#include "Const.h"

float CCircleMathDecorator::GetArea()
{
    CCircle* circle = dynamic_cast<CCircle*>(m_shape);

    if (circle)
    {
        return PI * circle->GetRadius() * circle->GetRadius();
    }

    return 0.0f;
}

float CCircleMathDecorator::GetPerimeter()
{

    CCircle* circle = dynamic_cast<CCircle*>(m_shape);

    if (circle)
    {
        return 2.0f * PI * circle->GetRadius();
    }

    return 0.0f;
}
