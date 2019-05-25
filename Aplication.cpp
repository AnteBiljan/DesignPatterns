#include <iostream>
#include "Window.h"
#include "Shape.h"

int main()
{
	Shape* basicShape = Shape::createShape("Triangle");
	basicShape->update();
	Shape* anotherShape = Shape::createShape("Rectangle");
	anotherShape->update();
	Window::getInstance()->update();
	
	return 0;
}