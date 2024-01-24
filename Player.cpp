#include "Player.h"
#include "Novice.h"

Player::Player() 
{
	position_.x = 640;
	position_.y = 450;
	radius_ = 35;
	color_ = GREEN;
}

Player::~Player(){}

void Player::Update(char *keys)
{
	Vector2 playerSpeed = { 5, 5 };

	if (keys[DIK_D]) {
		position_.x += playerSpeed.x;
	}

	if (keys[DIK_A]) {
		position_.x -= playerSpeed.x;
	}

	if (keys[DIK_W]) {
		position_.y -= playerSpeed.y;
	}

	if (keys[DIK_S]) {
		position_.y += playerSpeed.y;
	}
}

void Player::Draw() 
{
	Novice::DrawEllipse(position_.x, position_.y, radius_, radius_, 0.0f, color_, kFillModeSolid);
}