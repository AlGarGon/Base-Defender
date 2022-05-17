#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Texture_path.h"
#include"AssetManager.h"
#include<random>

class entity
{
private:
	int pos_x;
	int pos_y;
	sf::Texture texture;
	sf::Sprite image_entity;

	sf::RectangleShape* body;

public:
	entity();

	entity(sf::RectangleShape* body);
	~entity();
};

