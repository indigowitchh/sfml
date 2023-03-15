#include <SFML/Graphics.hpp> //bring in library


int main() //starting point of all C++ programs
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Trees"); //set up screen
	sf::CircleShape circle; //tell the program we're using this shape
	sf::RectangleShape rect; //this one too!



	while (window.isOpen())//GAME LOOP--------------------------------
	{
		sf::Event event; //look for keyboard/mouse/etc clicks
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) //check if player has closed window with top left 'x' button
				window.close();

		}

		//render section-------------------------------
		window.clear(); //wipe screen (needed more for animations)

		//left branch
		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 80)));
		circle.setPosition(200, 180);
		window.draw(circle);

		//right branch
		circle.setRadius(30);
		circle.setFillColor((sf::Color(80, 100, 0)));
		circle.setPosition(250, 180);
		window.draw(circle);

		//top branch
		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 0)));
		circle.setPosition(225, 150);
		window.draw(circle);

		//trunk
		rect.setPosition(245, 200);
		rect.setFillColor(sf::Color(100, 80, 0));
		rect.setSize(sf::Vector2f(20, 100));
		window.draw(rect);

		//---------------------------------------------------------
		//left2 branch
		circle.setRadius(30);
		circle.setFillColor((sf::Color(200, 100, 0)));
		circle.setPosition(100, 500);
		window.draw(circle);

		//right2 branch
		circle.setRadius(30);
		circle.setFillColor((sf::Color(150, 100, 0)));
		circle.setPosition(150, 500);
		window.draw(circle);

		//top2 branch
		circle.setRadius(30);
		circle.setFillColor((sf::Color(220, 100, 0)));
		circle.setPosition(125, 470);
		window.draw(circle);

		//trunk2
		rect.setPosition(145, 520);
		rect.setFillColor(sf::Color(92, 64, 51));
		rect.setSize(sf::Vector2f(20, 100));
		window.draw(rect);

		//---------------------------------------------------------
		//left3 branch
		circle.setRadius(30);
		circle.setFillColor((sf::Color(200, 10, 0)));
		circle.setPosition(600, 300);
		window.draw(circle);

		//right3 branch
		circle.setRadius(30);
		circle.setFillColor((sf::Color(130, 10, 0)));
		circle.setPosition(650, 300);
		window.draw(circle);

		//top3 branch
		circle.setRadius(30);
		circle.setFillColor((sf::Color(120, 10, 0)));
		circle.setPosition(625, 270);
		window.draw(circle);

		//trunk3
		rect.setPosition(645, 320);
		rect.setFillColor(sf::Color(155, 83, 63));
		rect.setSize(sf::Vector2f(20, 100));
		window.draw(rect);

		//-----------------------------------------------------------
		//flower 1
		circle.setRadius(20);
		circle.setFillColor((sf::Color(255, 255, 0)));
		circle.setPosition(470, 600);
		window.draw(circle);
		
		
		window.display(); //flip the buffer (memory) to the screen

	}//end game loop-------------------------------------------------



	return 0; //tell the operating system we finished the program successfully 
} //end main
