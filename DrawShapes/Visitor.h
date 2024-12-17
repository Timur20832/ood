#pragma once
class CTriangle;
class CCircle;
class CRectangle;

class Visitor 
{
public:
    virtual ~Visitor() = default;
    virtual void Visit(CTriangle& triangle) = 0;
    virtual void Visit(CCircle& circle) = 0;
    virtual void Visit(CRectangle& rectangle) = 0;
};
