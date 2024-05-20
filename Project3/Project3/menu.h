#pragma once
#include "sfml/Graphics.hpp"
#define max_num 4
class menuFunc
{
public:

	menuFunc(int width, int hight);
	void draw(sf::RenderWindow& window);
	void moveUp();
	void moveDown();
	void pauseMoveUp();
	void pauseMoveDown();
	int getSelected_item()
	{
		return selected_item;
	}
	sf::Text menu[max_num];

private:

	sf::Font font;
	int selected_item;
};