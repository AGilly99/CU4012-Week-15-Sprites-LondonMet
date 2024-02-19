
#include "Curser.h"

Curser::Curser()
{
}

Curser::~Curser()
{
}

void Curser::update(float dt)
{
	float mouseX = input->getMouseX();
	float mouseY = input->getMouseY();

	setPosition(sf::Vector2f(mouseX, mouseY));
}
