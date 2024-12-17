#include "CRectangleDrawDecorator.h"
#include "CRectangle.h"

void CRectangleDrawDecorator::Draw(sf::RenderWindow& window)
{
    CRectangle* rectangle = dynamic_cast<CRectangle*>(m_shape);

    if (rectangle)
    {
        window.draw(rectangle->GetShape());
    }
}