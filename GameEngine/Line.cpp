#include "Line.h"
#include<SFML/Graphics.hpp>

Line::Line()
{
	texture.loadFromFile("Line.png");
	sprite.setTexture(texture);
	Position.x = 1360 / 2;
	Position.y = 360;
}

Sprite Line::getSprite()
{
	return sprite;
}

void Line::update(float elapsedTime)
{
	if (right)
	{

		Position.x += Speed * elapsedTime;
		Position.y = 360 - log(Position.x) * 25;
	}

	if (left)
	{
		Position.x -= Speed * elapsedTime;
		Position.y = 360 - log(Position.x) * 25;
	}
	sprite.setPosition(Position);
}