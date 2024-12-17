#include "CTriangleMathDecorator.h"

float CTriangleMathDecorator::GetArea()
{
    CTriangle* triangle = dynamic_cast<CTriangle*>(m_shape);

    if (triangle)
    {
        float p = (triangle->GetFirstSide() + triangle->GetSecondSide() + triangle->GetThirdSide()) / 2.0f;

        return std::sqrt(p * (p - triangle->GetFirstSide()) * (p - triangle->GetSecondSide()) * (p - triangle->GetThirdSide()));
    }
}

float CTriangleMathDecorator::GetPerimeter()
{
    CTriangle* triangle = dynamic_cast<CTriangle*>(m_shape);

    return triangle->GetFirstSide() + triangle->GetSecondSide() + triangle->GetThirdSide();
}
