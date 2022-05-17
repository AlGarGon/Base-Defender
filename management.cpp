#include "entity.h"
#include "defence.h"
#include "ennemi.h"

#define Tour 0
#define TOURELLE 1
#define ENNEMI 2

//int tourelle = 1;
//int tourelle = 1;

void create_tourelle(AssetManager * manager, sf::RenderWindow* window)
{
	defence* tourelle = new defence(TOURELLE, manager, window);
}


void create_ennemi(AssetManager* manager, sf::RenderWindow* window)
{
	ennemi* nouvel_ennemi = new ennemi(1, manager, window);
}