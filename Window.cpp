#include "Window.h"
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

Window* Window::instance = 0;

std::string Window::getWindowName()
{
	return "Moj singleton prozor";
}

Window* Window::getInstance()
{
	if (instance == nullptr)
	{
		instance = new Window;
		return instance;
	}
	else
	{
		return instance;
	}
}

void Window::update()
{
	while (this->renderContext->isOpen())
	{
		sf::Event event;
		while (this->renderContext->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				this->renderContext->close();
		}

		this->renderContext->clear();
		this->renderContext->display();
	}
}


Window::Window()
{
	renderContext = new sf::RenderWindow(sf::VideoMode(800, 600), this->getWindowName());
}


Window::~Window()
{
}
