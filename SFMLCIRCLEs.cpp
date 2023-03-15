#include <SFML/Graphics.hpp>
int main() {
	sf::RenderWindow window(sf::VideoMode(800, 800), "SFML Circles");

	sf::CircleShape circle;

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
	//render section------
	//circle settings---
		circle.setRadius(rand()%70);
		circle.setFillColor(sf::Color(rand()%100, rand() % 250, rand() % 200));
		circle.setPosition(rand()%800, rand()%800);

		window.draw(circle);
		window.display(); //flip buffer
	}
	return 0; //kill program
}
