#pragma once
class gestion_entity
{
private:
	int id_type;
	int id_gest_entity;
	bool collision = false;





public:
	gestion_entity();
	virtual int get_action();



};

