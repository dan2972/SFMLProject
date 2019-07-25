#pragma once
#include <SFML/Graphics.hpp>

class GameObject
{
public:
	GameObject();
	virtual void draw() = 0;
	virtual void tick() = 0;
	virtual sf::RectangleShape getRect() = 0;\
	~GameObject();
private:
	float x;
	float y;
};

