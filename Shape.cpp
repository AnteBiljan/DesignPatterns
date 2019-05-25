#include "Shape.h"
#include "Triangle.h"
#include "Rectangle.h"



Shape * Shape::createShape(std::string type)
{
	if (type == "Triangle")
	{
		return new Triangle();
	}
	else if (type == "Rectangle")
	{
		return new Rectangle();
	}
}

Shape::Shape()
{
}


Shape::~Shape()
{
}
