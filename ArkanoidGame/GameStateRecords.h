#pragma once
#include <SFML/Graphics.hpp>
#include <vector>

namespace ArkanoidGame
{
	class Game;

	class GameStateRecordsData
	{
	public:
		~GameStateRecordsData()=default;

		void Init();
		void Shutdown();
		void HandleWindowEvent(const sf::Event& event);
		void Update(float timeDelta);
		void Draw(sf::RenderWindow& window);

	private:
		// Resources
		sf::Font font;

		sf::Text titleText;
		std::vector<sf::Text> tableTexts;
		sf::Text hintText;
	};	
}
