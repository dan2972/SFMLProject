#pragma once
#include <SFML/Graphics.hpp>
#include "GameObject.h"

class Player : public GameObject
{
public:
	Player(float x, float y);
	void draw();
	void tick();
	sf::RectangleShape getRect();
	~Player();
private:
	float x;
	float y;
	float vx;
	float vy;
	float speed;

	bool falling;
	bool grounded;

	sf::RectangleShape rect;
};

