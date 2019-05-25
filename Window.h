#ifndef WINDOW_H
#define WINDOW_H

#include <string>
#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

class Window
{
public:
	std::string getWindowName();
	static Window* getInstance();
	void update();
private:
	static Window * instance;
	sf::RenderWindow* renderContext;
	Window();
	~Window();
};

#endif