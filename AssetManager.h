#pragma once
#include <SFML/Graphics.hpp>
#include<map>


class AssetManager
{
private :
	std::map<std::string, sf::Texture> m_textures;
	static AssetManager* sInstance;

public:
	AssetManager();

	static sf::Texture& GetTexture(std::string const& filename);
};

