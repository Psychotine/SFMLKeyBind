#ifndef SFML_KEY_BIND
#define SFML_KEY_BIND

#include "SFML\Graphics.hpp"

enum InputType
{
	KeyboardInput,
	MouseInput
};

struct Key
{
	InputType inputType;
	sf::Event::EventType eventType;
	sf::Keyboard::Key keyCode;
	sf::Mouse::Button mouseButton;
};

namespace kb
{
	static bool inputCheck(const Key t_key, const sf::Event t_e)
	{
		if (t_key.inputType == KeyboardInput && t_key.eventType == t_e.type && t_key.keyCode == t_e.key.code)
		{
			return true;
		}
		if (t_key.inputType == MouseInput && t_key.eventType == t_e.type && t_key.keyCode == t_e.mouseButton.button)
		{
			return true;
		}
		return false;
	}
}

#endif