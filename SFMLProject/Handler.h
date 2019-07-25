#pragma once
#include <list>
#include "GameObject.h"
class Handler
{
public:
	Handler();
	void addObject(GameObject *obj);
	void render(sf::RenderWindow *window);
	void tick();
	~Handler();

private:
	std::list <GameObject*> objList;
};

