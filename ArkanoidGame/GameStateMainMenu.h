#pragma once
#include "SFML/Graphics.hpp"
#include "Menu.h"

namespace ArkanoidGame
{
	class Game;

	class GameStateMainMenuData
	{
	public:
		~GameStateMainMenuData()=default;

		void Init();
		void Shutdown();
		void HandleWindowEvent( const sf::Event& event);
		void Update(float timeDelta);
		void Draw(sf::RenderWindow& window);

	private:
		sf::Font font;
		Menu menu;
	};	
}
