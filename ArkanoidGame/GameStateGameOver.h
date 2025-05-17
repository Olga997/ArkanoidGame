#pragma once
#include "SFML/Graphics.hpp"

namespace ArkanoidGame
{
	class Game;

	class GameStateGameOverData
	{
	public:
		~GameStateGameOverData()=default;

		void Init();
		void Shutdown();
		void HandleWindowEvent(const sf::Event& event);
		void Update(float timeDelta);
		void Draw(sf::RenderWindow& window);

	private:
		// Resources
		sf::Font font;

		float timeSinceGameOver = 0.f;

		// UI data
		sf::RectangleShape background;
		sf::Text gameOverText;
		sf::Text hintText;
		std::vector<sf::Text> recordsTableTexts;
	};
}
