#pragma once
#include "Ball.h"
#include "GameObject.h"

namespace ArkanoidGame
{
	class Block : public GameObject
	{		
	public:
		void OnHit();
		int hitCount = 1;
		Block(const sf::Vector2f& position );
		virtual ~Block();
		bool CheckCollisionWithBall(const Ball& ball) const;
		void Update(float timeDelta) override;
		bool IsBroken();
	};
}