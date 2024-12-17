#include "CCircleDrawDecorator.h"
#include "CCircle.h"

void CCircleDrawDecorator::Draw(sf::RenderWindow& window)
{
    CCircle* circle = dynamic_cast<CCircle*>(m_shape);
    if (circle)
    {
        window.draw(circle->GetShape());
    }
}
