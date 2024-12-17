#include "Handler.h"
#include <typeindex>

std::vector<std::shared_ptr<CShape>> Handler::ReadShapesFromFile(const std::string filename)
{
    std::vector<std::shared_ptr<CShape>> shapes;
    std::ifstream file(filename);
    std::string line;
    std::map<std::string, int> shapeFunctions = 
    {
        {STR_PREFIX_TRIANGLE, NUM_TRIANGLE},
        {STR_PREFIX_CIRCLE, NUM_CIRCLE},
        {STR_PREFIX_RECTANGLE, NUM_RECTANGLE}
    };

    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string shapeType;
        iss >> shapeType;

        auto it = shapeFunctions.find(shapeType);
        std::shared_ptr<ShapesCreatorFactory> creatorPtr;

        switch (it->second)
        {
        case NUM_TRIANGLE:
            creatorPtr = TriangleCreator::GetInstance();
            shapes.push_back(creatorPtr->CreateShape(iss));
            break;
        case NUM_CIRCLE:
            creatorPtr = CircleCreator::GetInstanse();
            shapes.push_back(creatorPtr->CreateShape(iss));
            break;
        case NUM_RECTANGLE:
            creatorPtr = RectangleCreator::GetInstanse();
            shapes.push_back(creatorPtr->CreateShape(iss));
            break;
        default:
            break;
        }
    }

    return shapes;
}


void Handler::WriteResultsToFile(const std::string filename, std::vector<std::shared_ptr<CShape>>& shapes) {
    std::ofstream file(filename);

    MathVisitor visitor;
    for (std::shared_ptr<CShape>& shape : shapes)
    {
        shape->Accept(visitor);
        file << visitor.GetResult();
    }
}

void Handler::DrawShapes(std::vector<std::shared_ptr<CShape>>& shapes)
{
    sf::RenderWindow window(sf::VideoMode(800, 600), NAME_PROJECT);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();

        for (std::shared_ptr<CShape>& shape : shapes) {
            if (auto rectangle = std::dynamic_pointer_cast<CRectangle>(shape)) {
                CRectangleDrawDecorator decorator(rectangle.get());
                decorator.Draw(window);
            }
            else if (auto circle = std::dynamic_pointer_cast<CCircle>(shape)) {
                CCircleDrawDecorator decorator(circle.get());
                decorator.Draw(window);
            }
            else if (auto triangle = std::dynamic_pointer_cast<CTriangle>(shape)) {
                CTriangleDrawDecorator decorator(triangle.get());
                decorator.Draw(window);
            }
        }
        window.display();
    }
}

void Handler::HandleCommands(std::vector<std::shared_ptr<CShape>>& shapes)
{
    shapes = ReadShapesFromFile(INPUT);
    WriteResultsToFile(OUTPUT, shapes);
    DrawShapes(shapes);
}