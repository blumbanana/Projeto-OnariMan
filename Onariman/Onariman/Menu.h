#pragma once
#include "SFML/Graphics.hpp"
#include <SFML/Audio.hpp>
#include "Texturas.h"
#define MAX_NUMBER_OF_ITEMS 3
#define SWIDTH 1680
#define SHEIGHT 1050
class Menu
{
public:
	Menu(float width, float height);
	~Menu();
	
	void draw(sf::RenderWindow &window);
	void MoveUp();
	void MoveDown();
	int GetPressedItem() { return selectedItemIndex; }
	
private:
	int selectedItemIndex;
	sf::Font font;
	sf::Text menu[MAX_NUMBER_OF_ITEMS];
	sf::Music music;
	sf::Sprite fundo;
	sf::Texture texturafundo;
	std::vector<sf::Sprite> sprites_vector;
	std::vector<sf::Texture> texturas_vector;
	Texturas texMenu;
public:
	void selection();
	int play_music();
	
private:
	std::string skin;
public:
	int loadFundo();
	void loadTeste(std::string);
};

