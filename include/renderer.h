#ifndef RENDERER_H
#define RENDERER_H
#include <SFML/Graphics.hpp>
#include <vector>
class Renderer
{
private:
	sf::RenderWindow * window;	
	void handleEvents();	

public:
	Renderer();
	~Renderer();
	void render();
};

#endif /* RENDERER_H */
