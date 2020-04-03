#include "Engine.h"

void Engine::input()
{
	if (Keyboard::isKeyPressed(Keyboard::Escape))
	{
		m_Window.close();
	}
    if (Keyboard::isKeyPressed(Keyboard::A))
    {
        m_Dot.moveLeft();
    }
    else
    {
        m_Dot.stopLeft();
    }

    if (Keyboard::isKeyPressed(Keyboard::D))
    {
        m_Dot.moveRight();
    }
    else
    {
        m_Dot.stopRight();
    }
}