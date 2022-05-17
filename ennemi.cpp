#include "ennemi.h"

#define droite sf::Vector2f(1,0)
ennemi::ennemi(){}

ennemi::ennemi(int type, AssetManager* textureManager, sf::RenderWindow* window)
{
	
	this->enn_pos_x = rand()%-20;
	this->enn_pos_y = 600;
	sf::Sprite soldat = sf::Sprite(textureManager->GetTexture(TEXTURE_SOLDAT));
	soldat.setPosition(this->enn_pos_x, this->enn_pos_y);
	soldat.setScale(0.5f, 0.5f);

	sf::Time t2 = sf::milliseconds(100);

	for (int i = 0; i < 500; i++)
	{
		soldat.move(droite);
		t2;
	}
	window->draw(soldat);
	
}



void ennemi:: attaquer(entity* cible){}
void ennemi::se_deplacer(){}
