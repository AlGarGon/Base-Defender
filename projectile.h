#pragma once
#include "entity.h"
class projectile : public entity
{
private:
	int type_projectile;

public:
	
	virtual void deplacement(entity* vitesse_ammo);
};

