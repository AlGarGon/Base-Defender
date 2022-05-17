#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Texture_path.h"
#include"AssetManager.h"
#include<random>

class entity
{
private:
	sf::Texture texture;
	sf::Sprite image_entity;

	sf::RectangleShape* body;
	sf::RectangleShape* tower
	sf::Vector2f towerPosition(810,0); //a modifier
	sf::Vector2f direction(0,0)
	bool collide = false;

public:
	entity();

	entity(sf::Color* body, sf::RectangleShape* tour,sf::Vector2f position,sf::Vector2f taille);
	~entity();

	deplacement();
};

