#include "Dot.h"
#include <math.h>
Dot::Dot()
{
	Speed = 10;
	texture.loadFromFile("Dot.png");
	sprite.setTexture(texture);
	Position.x = 1360/2;
	Position.y = 360;
}
Sprite Dot::getSprite()
{
	return sprite;
}
Texture Dot::getTexture()
{
	return texture;
}

void Dot::moveLeft()
{
	left = true;
}
void Dot::moveRight()
{
	right = true;
}
void Dot::stopLeft()
{
	left = false;
}
void Dot::stopRight()
{
	right = false;
}
void Dot::update(float elapsedTime)
{
	if (right)
	{

		Position.x += Speed * elapsedTime;
		Position.y = 360-log(Position.x)*25;
	}

	if (left)
	{
		Position.x -= Speed * elapsedTime;
		Position.y = 360 - log(Position.x) * 25;
	}
	sprite.setPosition(Position);
}