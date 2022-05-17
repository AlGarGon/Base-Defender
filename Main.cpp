#include <SFML/Graphics.hpp>
#include<iostream>

/*Parametres*/
#define largeurWindow 1920
#define hauteurWindow 1080

#define VectZero sf::Vector2f(0,0)
#define Droite sf::Vector2f(50,0)

int main()
{
	/* affichage écran*/
	sf::RenderWindow window(sf::VideoMode(largeurWindow,hauteurWindow ), "SFML works!");
	sf::View view(VectZero, sf::Vector2f(largeurWindow, hauteurWindow));
	sf::View Uiview(sf::Vector2f(window.getSize().x / 2.0f, window.getSize().y / 2.0f), sf::Vector2f(largeurWindow, hauteurWindow));
	sf::View Inventaireview(sf::Vector2f(window.getSize().x / 2.0f, window.getSize().y / 2.0f), sf::Vector2f(largeurWindow, hauteurWindow));
	
	window.setFramerateLimit(60);

	/*Affichage forme*/
	sf::RectangleShape rectangle(sf::Vector2f(50.f, 80.f));
	sf::RectangleShape tour(sf::Vector2f(100.f, 500.f));

	/*sf::ConvexShape triangle; // création forme vide
	triangle.setPointCount(3); // définit nbr de point
	triangle.setPoint(0, sf::Vector2f(0.f, 0.f)); // définit sommet
	triangle.setPoint(1, sf::Vector2f(-50.f, 300.f)); // définit cote gauche
	triangle.setPoint(2, sf::Vector2f(50.f, 300.f)); // définit cote droit*/

	tour.setPosition(largeurWindow/2.f, 0.f);
	//triangle.setScale(0.5f, 0.5f);
	
	sf::Clock clock;
	sf::Time t1 = sf::Time::Zero;

	/*for (int x=0; x < 50; x++) {
		rectangle.move(Droite);
		sf::Time t1 = sf::microseconds(100000);
	}*/

	while (window.isOpen())
	{
		t1 = clock.restart();

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
			{
				// la touche "flèche gauche" est enfoncée : on bouge le personnage
				window.close();
			}
			if (event.type == sf::Event::Closed)
				window.close();
		}
		//zone of love
		rectangle.move(Droite.x * t1.asSeconds(), Droite.y * t1.asSeconds());
		if (rectangle.getGlobalBounds().intersects(tour.getGlobalBounds()))
		{
			std::cout << "Touché";
			rectangle.move(VectZero.x * t1.asSeconds(), VectZero.y * t1.asSeconds());
		}

		//_____
		window.clear();
		window.draw(rectangle);
		window.draw(tour);
		//window.draw(shape);
		window.display();

		
	}
	return 0;
}