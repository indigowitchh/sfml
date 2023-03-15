#include<iostream>
#include "SFML/Graphics.hpp"
using namespace std;
int main() {
	//game set up (you'll need these lines in every game)
	sf::RenderWindow screen(sf::VideoMode(800, 800), "SFML scaling"); //set up screen
	sf::Event event; //set up event queue
	sf::Clock clock; //set up the clock (needed for game timing)
	const float FPS = 60.0f; //FPS
	screen.setFramerateLimit(FPS); //set FPS

	//load in images
	sf::Texture link;
	link.loadFromFile("image.png");
	sf::Sprite LinkPic;
	LinkPic.setTexture(link);
	
	//you can add scaling stuff here
	// set the absolute scale of the entity
	LinkPic.setScale(1.f, .6f);
	// scale the entity relatively to its current scale
	LinkPic.scale(0.5f, 0.5f);
	// retrieve the absolute scale of the entity
	sf::Vector2f scale = LinkPic.getScale(); // = (2, 0.8)


// set the absolute position of the entity
	LinkPic.setPosition(300.f, 300.f);
	// move the entity relatively to its current position
	LinkPic.move(5.f, 5.f);
	// retrieve the absolute position of the entity
	sf::Vector2f position = LinkPic.getPosition(); // = (15, 55)



	//################### HOLD ONTO YOUR BUTTS, ITS THE GAME LOOP###############################################################
	while (screen.isOpen()) {//keep window open until user shuts it down

		while (screen.pollEvent(event)) { //look for events-----------------------

			//this checks if the user has clicked the little "x" button in the top right corner
			if (event.type == sf::Event::EventType::Closed)
				screen.close();

		}//end event loop---------------------------------------------------------------

		//physics section---------------------------------------------------------------

		//you can add rotation 
// set the absolute rotation of the entity
		LinkPic.setRotation(45.f);
		//rotate the entity relatively to its current orientation
		LinkPic.rotate(10.f);
		 //retrieve the absolute rotation of the entity
		float rotation = LinkPic.getRotation(); // = 55
	

		//render section-----------------------------------------
		screen.clear(); //wipes screen, without this things smear
		screen.draw(LinkPic);
		screen.display(); //flips memory drawings onto screen

	}//######################## end game loop ###################################################################################

	cout << "goodbye!" << endl;
} //end of main
