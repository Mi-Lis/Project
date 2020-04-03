#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class Dot
{
private:
	Vector2f Position;
	Sprite sprite;
	Texture texture;
	bool left;
	bool right;
	float Speed;
public:
	Dot();
	Texture getTexture();
	Sprite getSprite();
	void moveLeft();
	void moveRight();
	void stopLeft();
	void stopRight();
	void update(float elapsedTime);
};