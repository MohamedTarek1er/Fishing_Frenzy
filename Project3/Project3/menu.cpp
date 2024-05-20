#include "menu.h".
using namespace sf;

menuFunc::menuFunc(int width, int hight)
{
	font.loadFromFile("Resources/Fonts/scrubland.regular.ttf");

	menu[0].setFont(font);
	menu[0].setFillColor(Color(200, 200, 255, 255));
	menu[0].setOutlineColor(Color::Black);
	menu[0].setOutlineThickness(2);

	menu[1].setFont(font);
	menu[1].setFillColor(Color::White);

	menu[2].setFont(font);
	menu[2].setFillColor(Color::White);

	menu[3].setFont(font);
	menu[3].setFillColor(Color::White);

	selected_item = 0;
}
void menuFunc::draw(sf::RenderWindow& window)
{
	for (int i = 0; i < max_num; i++)
		window.draw(menu[i]);
}
void menuFunc::moveUp()
{
	if (selected_item - 1 >= -1)
	{
		menu[selected_item].setFillColor(Color::White);
		menu[selected_item].setOutlineThickness(0);

		selected_item--;
		if (selected_item == -1)
			selected_item = 3;

		menu[selected_item].setFillColor(Color(200, 200, 255, 255));
		menu[selected_item].setOutlineColor(Color::Black);
		menu[selected_item].setOutlineThickness(2);
	}
}
void menuFunc::moveDown()
{
	if (selected_item + 1 <= 4)
	{
		menu[selected_item].setFillColor(Color::White);
		menu[selected_item].setOutlineThickness(0);

		selected_item++;
		if (selected_item == 4)
			selected_item = 0;

		menu[selected_item].setFillColor(Color(200, 200, 255, 255));
		menu[selected_item].setOutlineColor(Color::Black);
		menu[selected_item].setOutlineThickness(2);
	}
}
void menuFunc::pauseMoveUp()
{
	if (selected_item - 1 >= -1)
	{
		menu[selected_item].setFillColor(Color::White);
		menu[selected_item].setOutlineThickness(0);

		selected_item--;
		if (selected_item == -1)
			selected_item = 2;

		menu[selected_item].setFillColor(Color(200, 200, 255, 255));
		menu[selected_item].setOutlineColor(Color::Black);
		menu[selected_item].setOutlineThickness(2);
	}
}
void menuFunc::pauseMoveDown()
{
	if (selected_item + 1 <= 3)
	{
		menu[selected_item].setFillColor(Color::White);
		menu[selected_item].setOutlineThickness(0);

		selected_item++;
		if (selected_item == 3)
			selected_item = 0;
		
		menu[selected_item].setFillColor(Color(200, 200, 255, 255));
		menu[selected_item].setOutlineColor(Color::Black);
		menu[selected_item].setOutlineThickness(2);
	}
}