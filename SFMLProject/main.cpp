#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Handler.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Title", sf::Style::Default);

	window.setFramerateLimit(60);

	Handler handler = Handler();

	Player p = Player(100, 100);

	handler.addObject(&p);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		handler.tick();

		window.clear();
		handler.render(&window);
		window.display();
	}

	return 0;
}