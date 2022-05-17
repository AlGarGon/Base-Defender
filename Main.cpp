#include <SFML/Graphics.hpp>
#include <random>
#include <iostream>

/*Parametres*/
#define largeurWindow 1920
#define hauteurWindow 1080
//#define PosiTour sf::Vector2f(largeurWindow/2.f, 300.f)

#define VectZero sf::Vector2f(0,0)
#define Droite sf::Vector2f(50,0)
#define Gauche sf::Vector2f(-50,0)

int position = 0;

int main()
{
	/* affichage ecran*/
	sf::RenderWindow window(sf::VideoMode(largeurWindow, hauteurWindow), "SFML works!");
	//sf::View view(VectZero, sf::Vector2f(largeurWindow, hauteurWindow));
	//sf::View Uiview(sf::Vector2f(window.getSize().x / 2.0f, window.getSize().y / 2.0f), sf::Vector2f(largeurWindow, hauteurWindow));
	//sf::View Inventaireview(sf::Vector2f(window.getSize().x / 2.0f, window.getSize().y / 2.0f), sf::Vector2f(largeurWindow, hauteurWindow));

	// limitation FPS
	window.setFramerateLimit(60);

	/*Affichage forme*/
	sf::RectangleShape rectangleGauche(sf::Vector2f(50.f, 80.f));
	rectangleGauche.setFillColor(sf::Color::Magenta);

	sf::RectangleShape tour(sf::Vector2f(100.f, 500.f));
	tour.setFillColor(sf::Color::White);

	sf::RectangleShape rectangleDroite(sf::Vector2f(50.f, 80.f));
	rectangleDroite.setFillColor(sf::Color::Yellow);

	/*ajout ligne sol*/
	sf::Vertex line[] =
	{
		sf::Vertex(sf::Vector2f(0.f, 800.f)),
		sf::Vertex(sf::Vector2f(1920.f, 800.f))
	};

	/*Positionnement*/
	tour.setPosition(largeurWindow / 2.f, 300.f);
	rectangleGauche.setPosition(0.f, 720.f);
	rectangleDroite.setPosition(1900.f, 720.f);

	//init clock
	sf::Clock clock;
	sf::Time t1 = sf::Time::Zero;

	sf::Vector2f deplacementGauche = Droite;
	sf::Vector2f deplacementDroite = Gauche;

	/*position = rand() % 2;
	if (position == 1)
	{
		std::cout << "1";
		sf::RectangleShape rectangleGauche(sf::Vector2f(50.f, 80.f));
		rectangleGauche.setFillColor(sf::Color::Magenta);
		rectangleGauche.setPosition(0.f, 720.f);
		window.draw(rectangleGauche);
	}

	if (position == 0)
	{
		std::cout << "0";
		sf::RectangleShape rectangleDroite(sf::Vector2f(50.f, 80.f));
		rectangleDroite.setFillColor(sf::Color::Yellow);
		rectangleDroite.setPosition(1900.f, 720.f);
		window.draw(rectangleDroite);
	}*/

	while (window.isOpen())
	{
		t1 = clock.restart();

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
			{
				// la touche escape est enfoncee : on quitte la page
				window.close();
			}
			if (event.type == sf::Event::Closed)
				window.close();
		}
		//zone of love
		rectangleGauche.move(deplacementGauche.x * t1.asSeconds(), deplacementGauche.y * t1.asSeconds());
		rectangleDroite.move(deplacementDroite.x * t1.asSeconds(), deplacementDroite.y * t1.asSeconds());

		if (rectangleGauche.getGlobalBounds().intersects(tour.getGlobalBounds()))
		{
			std::cout << "Touche";
			deplacementGauche = VectZero;
			rectangleGauche.setFillColor(sf::Color::Red);
		}

		if (rectangleDroite.getGlobalBounds().intersects(tour.getGlobalBounds()))
		{
			//std::cout << "Touche";
			deplacementDroite = VectZero;
			rectangleDroite.setFillColor(sf::Color::Blue);
		}


		//_____


		window.clear();
		window.draw(line, 2, sf::Lines);
		window.draw(rectangleGauche);
		window.draw(tour);
		window.draw(rectangleDroite);
		window.display();


	}
	return 0;
}





/*
position tour - position ennemi = ...
x = ...

distance = tour.x -
*/