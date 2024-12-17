#include "CTriangleDrawDecorator.h"

void CTriangleDrawDecorator::Draw(sf::RenderWindow& window)
{
    CTriangle* triangle = dynamic_cast<CTriangle*>(m_shape);

    if (triangle)
    {
        window.draw(triangle->GetShape());
    }
}
