#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"


class Triangle :
	public Shape
{
public:
	void update();
	Triangle();
	~Triangle();
};

#endif // !TRIANGLE_H
