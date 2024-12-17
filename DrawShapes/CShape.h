#pragma once
#include "string"
#include "sstream"
#include <iomanip>
#include "cmath"
#include <SFML/Graphics.hpp>
#include <memory>

class Visitor;

class CShape
{
public:
	virtual sf::Drawable& GetShape() = 0;
	virtual ~CShape() = default;

	virtual void Accept(Visitor& visitor) {};
};

