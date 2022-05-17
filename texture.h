#pragma once
#include "entity.h"
class texture
{
private:
	int id_entity;
	int id_type;

public:
	texture();
	virtual int get_id_entity();
	virtual int get_id_type();

	virtual void affichage_sprite(entity* destinataire);
	//id_type = desinataire->type_texure;
	//id-texture = destin


};

