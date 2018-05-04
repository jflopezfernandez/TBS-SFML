
#ifndef GAME_GAME_HPP_
#include "Game.hpp"
#endif // GAME_GAME_HPP_

Game::Game()
	: window(sf::VideoMode(800, 600), "Game Window"), player(150) {
}

void Game::run() {
	while (window.isOpen()) {
		processEvents();
		update();
		render();
	}
}

void Game::processEvents() {
	sf::Event event;

	while (window.pollEvent(event)) {
		if ((event.type == sf::Event::Closed) || (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)) {
			window.close();
		}
	}
}

void Game::update() {
	// TODO: Implement void Game::update() function
}

void Game::render() {
	window.clear(sf::Color::White);
	window.draw(player);
	window.display();
}
