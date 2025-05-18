#include "Block.h"
#include "Sprite.h"
#include "GameSettings.h"
#include <assert.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

namespace ArkanoidGame
{
	Block::Block(const sf::Vector2f& position)
		: GameObject(TEXTURES_PATH + "block.png", position, BLOCK_WIDTH, BLOCK_HEIGHT)
	{
		int r = rand() % 256;
		int g= rand() % 256;
		int b = rand() % 256;

		sprite.setColor(sf::Color(r,g,b));
	}
	Block::~Block()
	{
	}
	bool Block::CheckCollisionWithBall(const Ball& ball) const
	{
		auto sqr = [](float x)
		{
			return x * x;
		};

		const auto rect = sprite.getGlobalBounds();
		const auto ballPos = ball.GetPosition();

		if (ballPos.x < rect.left) 
		{
			return sqr(ballPos.x - rect.left) + sqr(ballPos.y - rect.top) < sqr(BALL_SIZE / 2.0);
		}

		if (ballPos.x > rect.left + rect.width) 
		{
			return sqr(ballPos.x - rect.left - rect.width) + sqr(ballPos.y - rect.top) < sqr(BALL_SIZE / 2.0);
		}
		return std::fabs(ballPos.y - rect.top) <= BALL_SIZE / 2.0;
	}

	void Block::Update(float timeDelta)
	{

	}

	void Block::OnHit()
	{
		hitCount = 0;
	}

	bool Block::IsBroken()
	{
		return hitCount <= 0;
	}
}
