#include "defence.h"

#define Tour 0
#define TOURELLE 1
#define ENNEMI 2

defence::defence(int type, AssetManager* textureManager, sf::RenderWindow* window)
{
	switch (type)
	{
	case Tour:
		{

			break;
		}
	case TOURELLE:
		{
			/*sf::Texture* tab_texture = new sf::Texture[];
			sf::Texture texture;
			tab_texture[0] = texture.loadFromFile("tour.png", sf::IntRect(this->pos_def_x, this->pos_def_y, 50, 200));*/
			//sf::RenderWindow window;

			this->cadense_tir = 10;
			this->degat_defense = 50;
			this->nbr_munition = 100;
			this->pos_def_x = 0;
			this->pos_def_y = 200;
			//this->texture = new sf::Texture;
			//tablo[0].loadFromFile("..\\ressources\\images\\tour.png", sf::IntRect(this->pos_def_x, this->pos_def_y, 50, 200));

			/*this->image_entity.setTexture(texture);
			tablo.pusch_back(this->image_entity);
			window.draw(tablo[0]);*/

			
			/*this->texture->loadFromFile("..\\ressources\\images\\tour.png", sf::IntRect(pos_def_x, pos_def_y, 50, 200));
			tablo_textures.push_back(this->texture);
			tablo_sprites.back()->setTexture(*tablo_textures.back());*/


			/*texture->loadFromFile(TEXTURE_TOUR);
			tablo_textures.push_back(texture);
			image_entity->setTexture(*tablo_textures.back());
			tablo_sprites.push_back(image_entity);*/

			

			sf::Sprite tour = sf::Sprite(textureManager->GetTexture(TEXTURE_TOUR));
			tour.setPosition(1200.f,200.f);
			tour.setScale(0.5f, 0.5f);
			window->draw(tour);

		break;
		}
	case ENNEMI:
		{
			break;		
		}
	default:
		break;
	}
	


}

defence::defence(){}
void defence::ameliorer(int upgrade){}
void defence::get_bonus(int id_bonus) {}
