#include "Engine.h"
void Engine::draw()
{
	m_Window.draw(m_Line.getSprite());
	m_Window.clear(Color::White);
	m_Window.draw(m_BackgrounSprite);
	m_Window.draw(m_Dot.getSprite());
	m_Window.display();
}