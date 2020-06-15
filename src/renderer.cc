#include <renderer.h>
#include <iostream>
using namespace std;
using namespace sf;

Renderer::Renderer ()
{
	ContextSettings _settings;
	_settings.antialiasingLevel = 16;
	_settings.depthBits = 24;
	window = new RenderWindow(VideoMode(800,600),"Ouril", Style::Default, _settings);
	window->setFramerateLimit(60);

}
Renderer::~Renderer ()
{
	delete window;
}

void Renderer::render()
{
	while(window->isOpen())
	{
		window->clear();
		handleEvents();
		CircleShape c(10);
		c.setPosition(0,0);
		c.setFillColor(Color::Green);
		window->draw(c);
		window->display();
		std::cout << c.getPosition().x << c.getPosition().y << std::endl;
	}
}

void Renderer::handleEvents()
{
	Event event;
	while(window->pollEvent(event))
	{
		if(event.type == Event::Resized)
			window->setView(sf::View(sf::FloatRect(-1.f, 0.f, window->getSize().x, window->getSize().y)));
	}
}

