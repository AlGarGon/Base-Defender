#pragma once
#include "entity.h"

class gestionEntity
{
private:
	int time;
	int nbr_ennemis;
	int nbr_defenses;

	static std::vector<entity* > vecteur_defense;
	static std::vector<entity* > vecteur_ennemi;
	static std::vector<entity* > vecteur_projectile;

	static entity* tab_defence[50];
	static entity* tab_ennemi[50];
	static entity* tab_projectile[50];

public:
	gestionEntity();
	virtual void update_bodies(sf::Clock* clock, sf::RenderWindow* window, std::vector<entity*> tableau_enn, std::vector<entity*> tableau_def, std::vector<entity*> tableau_pro);
	virtual void collision_detection();

};
