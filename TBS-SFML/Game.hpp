
#ifndef GAME_GAME_HPP_
#define GAME_GAME_HPP_

#ifndef SFML_HEADER_INCLUDED
#define SFML_HEADER_INCLUDED
#include <SFML/Graphics.hpp>
#endif // SFML_HEADER_INCLUDED

class Game {
	void processEvents();
	void update();
	void render();

	sf::RenderWindow window;
	sf::CircleShape player;

public:
	/** \fn Game()
	 *
	 *  \brief Default constructor
	 *
	 */

	Game();

	Game(const Game& game) = delete;
	
	Game& operator=(const Game& game) = delete;

	void run();
};

#endif // GAME_GAME_HPP_
