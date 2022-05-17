#pragma once
#include "entity.h"
#include "AssetManager.h"
class ennemi : public entity
{
	private:
		int PV_ennemi;
		int degats_ennemi;
		int vitesse_ennemi;
		int cadence_tir_ennemi;
		int argent_a_dropper;
		int enn_pos_x;
		int enn_pos_y;

	public:
		ennemi();
		ennemi(int type, AssetManager* textureManager, sf::RenderWindow* window);
		void attaquer(entity* cible);
		void se_deplacer();

};

