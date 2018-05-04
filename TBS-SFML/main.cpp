
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow mainWindow(sf::VideoMode(800, 600), "Main Window");

	while (mainWindow.isOpen()) {
		sf::Event event;

		while (mainWindow.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				mainWindow.close();
		}

		mainWindow.clear(sf::Color::White);
		mainWindow.display();
	}

	return EXIT_SUCCESS;
}