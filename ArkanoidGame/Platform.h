#pragma once
#include <SFML/Graphics.hpp>
#include "Ball.h"

namespace ArkanoidGame
{
	class Ball;

	class Platform
	{
	public:
		~Platform()=default;

		void Init();
		void Update(float timeDelta);
		void Draw(sf::RenderWindow& window);	
		bool CheckCollisionWithBall(const Ball& ball) const;

		const sf::Vector2f& GetPosition() const { return sprite.getPosition(); }
		const sf::FloatRect& GetRect() const { return sprite.getGlobalBounds(); }

	private:
		void Move(float speed);

	private:
		sf::Sprite sprite;
		sf::Texture texture;
	};
}
