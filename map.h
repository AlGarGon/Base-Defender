#pragma once
class map
{
private:
	int id_texture;
	int id_type;
	int Xmax, Ymax;


public:
	map();
	virtual int get_id_texture();
	virtual int get_id_type();

	virtual void affichage_map();
};

