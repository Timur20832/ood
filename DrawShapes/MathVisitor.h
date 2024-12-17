#pragma once
#include "Visitor.h"
#include "CCircleMathDecorator.h"
#include "CRectangleMathDecorator.h"
#include "CTriangleMathDecorator.h"


class MathVisitor : public Visitor {
public:
    void Visit(CTriangle& triangle) override;

    void Visit(CCircle& circle) override;

    void Visit(CRectangle& rectangle) override;

    std::string GetResult();
private:
    std::string m_results;
};