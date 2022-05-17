#include "entity.h"


entity::entity() {}

entity::entity(sf::RectangleShape* body)
{
	this->body = body;
}

entity::~entity()
{}