#include "Engine.h"
Engine::Engine()
{
	Vector2f resolution;
	resolution.x = VideoMode::getDesktopMode().width;
	resolution.y = VideoMode::getDesktopMode().height;

	m_Window.create(VideoMode(resolution.x, resolution.y),
		"Graphic", 
		Style::Fullscreen);
	/*
		// Подготовьте изображение под ваш размер экрана в редакторе
    m_BackgroundTexture.loadFromFile("background.jpg");

    // Связываем спрайт и текстуру
    m_BackgroundSprite.setTexture(m_BackgroundTexture);
	*/
}

void Engine::start()
{
	//Расчет времени
	Clock clock;
	while (m_Window.isOpen())
	{
		Time dt = clock.restart();

		float dtAsSeconds = dt.asSeconds();

		input();
		update(dtAsSeconds);
		draw();
	}
}