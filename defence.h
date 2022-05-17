#pragma once

#include "entity.h"

#include <vector>
class defence : public entity
{
	private:
		int nbr_munition;
		int cadense_tir;
		int vitesse_projectile;
		int amelioration;
		int bonus;
		int degat_defense;
		int portee_arme;
		int type_texture;
		int id_texture;
		int pos_def_x;
		int pos_def_y;

		sf::Texture *texture;
		sf::Sprite *image_entity;
		std::vector<sf::Texture*> tablo_textures;
		std::vector<sf::Sprite*> tablo_sprites;

	public:
		defence();
		defence(int type, AssetManager* textureManager, sf::RenderWindow* window);
		entity* tirer() { return NULL; }
		void ameliorer(int upgrade);
		void get_bonus(int id_bonus);

		/*tablo.pusch_back(brol);
		tablo.size()*/

};

