#include "Handler.h"
#include <iostream>


Handler::Handler()
{
}

void Handler::addObject(GameObject *obj) {
	objList.push_back(obj);
}

void Handler::tick() {
	for (std::list<GameObject*>::iterator it = objList.begin(); it != objList.end(); ++it) {
		GameObject* tempObject = *it;
		tempObject->tick();
	}
}

void Handler::render(sf::RenderWindow *window) {
	for (std::list<GameObject*>::iterator it = objList.begin(); it != objList.end(); ++it) {
		GameObject *tempObject = *it;
		window->draw(tempObject->getRect());
	}
}

Handler::~Handler()
{
}
