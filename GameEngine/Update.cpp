#include "Engine.h"

using namespace sf;

void Engine::update(float dtAsSecond)
{
	m_Dot.update(dtAsSecond);
	m_Line.update(dtAsSecond);
}