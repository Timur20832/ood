#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cmath>
#include <SFML/Graphics.hpp>
#include "CShape.h"
#include "CTriangle.h"
#include "CRectangle.h"
#include "CCircle.h"
#include "CTriangleDrawDecorator.h"
#include "CRectangleDrawDecorator.h"
#include "CCircleDrawDecorator.h"
#include "CCircleMathDecorator.h"
#include "CRectangleMathDecorator.h"
#include "CTriangleMathDecorator.h"
#include "Const.h"
#include <map>
#include <functional>
#include "ShapesCreatorFactory.h"
#include "TriangleCreator.h"
#include "RectangleCreator.h"
#include "CircleCreator.h"
#include "MathVisitor.h"
#include "Visitor.h"
#include "CDrawDecorator.h"
#include "CMathDecorator.h"
#include "CShapeDecorator.h"

class Handler
{
public:
	void HandleCommands(std::vector<std::shared_ptr<CShape>>& shapes);

private:
	void DrawShapes(std::vector<std::shared_ptr<CShape>>& shapes);
	std::vector<std::shared_ptr<CShape>> ReadShapesFromFile(const std::string filename);
	void WriteResultsToFile(const std::string filename, std::vector<std::shared_ptr<CShape>>& shapes);
};