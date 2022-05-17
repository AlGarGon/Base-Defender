#include "entity.h"


entity::entity(){}

entity::entity(color,tower,position,taille)
{
	this->body.setFillColor(color);
	this->tower = tower;
	body.setPosition(position);
	body.set   //set la taille
}

entity::~entity()
{}

entity::deplacement(){

	if(!collide)
	{
	direction = this.body.position() - tower.position();
	if(direction.x < 0){
		body.move(direction.x%2+1*50,0)
	}
	else {
		body.move(direction.x%2-1*50,0)
	}	
		if (body.getGlobalBounds().intersects(tour.getGlobalBounds()))
		{
			std::cout << "Touch�";
			collide = true;
			rectangleGauche.setFillColor(sf::Color::Red);
		}
	}
	
	

}