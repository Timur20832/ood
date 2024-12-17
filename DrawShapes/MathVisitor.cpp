#include "MathVisitor.h"
#include <memory>
#include "Const.h"
void MathVisitor::Visit(CTriangle& triangle)
{
	CTriangleMathDecorator decorator(&triangle);
	std::stringstream ss;
	ss << STR_PREFIX_TRIANGLE
		<< STR_PREFIX_PERIMETER << decorator.GetPerimeter()
		<< SEMICOLON
		<< STR_PREFIX_AREA << decorator.GetArea()
		<< std::endl;

	m_results = ss.str();
}

void MathVisitor::Visit(CCircle& circle)
{
	CCircleMathDecorator decorator(&circle);

	std::stringstream ss;
	ss << STR_PREFIX_CIRCLE
		<< STR_PREFIX_PERIMETER << decorator.GetPerimeter()
		<< SEMICOLON
		<< STR_PREFIX_AREA << decorator.GetArea()
		<< std::endl;

	m_results = ss.str();
}

void MathVisitor::Visit(CRectangle& rectangle)
{
	CRectangleMathDecorator decorator(&rectangle);
	std::stringstream ss;
	ss << STR_PREFIX_RECTANGLE
		<< STR_PREFIX_PERIMETER << decorator.GetPerimeter()
		<< SEMICOLON
		<< STR_PREFIX_AREA << decorator.GetArea()
		<< std::endl;

	m_results = ss.str();
}

std::string MathVisitor::GetResult()
{
	return m_results;
}
