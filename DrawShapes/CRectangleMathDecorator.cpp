#include "CRectangleMathDecorator.h"

float CRectangleMathDecorator::GetArea()
{
    CRectangle* rectangle = dynamic_cast<CRectangle*>(m_shape);

    if (rectangle)
    {
        return rectangle->GetSize().x * rectangle->GetSize().y;
    }

	return 0.0f;
}

float CRectangleMathDecorator::GetPerimeter()
{
    CRectangle* rectangle = dynamic_cast<CRectangle*>(m_shape);

    if (rectangle)
    {
        return 2.0f * (rectangle->GetSize().x + rectangle->GetSize().y);
    }

	return 0.0f;
}
