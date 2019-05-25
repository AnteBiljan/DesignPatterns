#ifndef SHAPE_H
#define SHAPE_H


#include <iostream>
#include <string>

class Shape
{
public:
	static Shape* createShape(std::string type);
	virtual void update() = 0;
	Shape();
	~Shape();
};

#endif // !SHAPE_H
