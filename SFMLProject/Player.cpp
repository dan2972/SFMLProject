#include "Player.h"
#include <SFML/Graphics.hpp>
#include "handler.h"


Player::Player(float x, float y)
{
	Player::x = x;
	Player::y = y;
	vx = 0;
	vy = 0;
	speed = 5;

	falling = true;
	grounded = false;

	rect = sf::RectangleShape(sf::Vector2f(32, 32));
}

void Player::draw() {
	
}

void Player::tick() {
	rect.setPosition(x, y);

	x += vx;
	y += vy;

	if (falling)
		vy += 1;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		vx = -speed;
	}else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		vx = speed;
	}
	else {
		vx = 0;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
		if (grounded && !falling) {
			vy = -15;
			grounded = false;
			falling = true;
		}
	}

	if (y >= 800-32) {
		y = 800-32;
		grounded = true;
		falling = false;
	}
}

sf::RectangleShape Player::getRect() {
	return rect;
}

Player::~Player()
{

}
