#pragma once
#include <SFML/Graphics.hpp>
#include"Dot.h"
#include "Line.h"
using namespace sf;
class Engine
{
private:
	RenderWindow m_Window;
	RenderTexture m_Texture;
	Sprite m_BackgrounSprite;
	Texture m_BackgroundTexture;
	Dot m_Dot;
	Line m_Line;
	void input();
	void update(float dtAsSeconds);
	void draw();
public:
	Engine();
	void start();
};