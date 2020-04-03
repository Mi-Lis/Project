#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class Line
{
private:
	Vector2f Position;
	Sprite sprite;
	Texture texture;
	bool right;
	bool left;
	float Speed;
public:
	Line();
	Sprite getSprite();
	void update(float elapsedTime);
};