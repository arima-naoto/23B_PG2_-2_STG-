#include "Enemy.h"
#include "Novice.h"

void Enemy::Initalize()
{
	position_.x = 640;
	position_.y = 150;
	radius_ = 20;
	speed_ = 7;
	color_ = WHITE;
	isAlive_ = true;
}

void Enemy::Update() 
{
	if (isAlive_ == true) 
	{
		position_.x += speed_;

		if (position_.x >= 1260 || position_.x <= 20) 
		{
			speed_ *= -1;
		}
	}
}

void Enemy::Draw() 
{
	if (isAlive_ == true) 
	{
		Novice::DrawEllipse(position_.x, position_.y, radius_, radius_, 0.0f, color_, kFillModeSolid);
	}
}
