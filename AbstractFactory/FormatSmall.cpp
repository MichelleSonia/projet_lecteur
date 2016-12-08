#include "FormatSmall.hpp"

	FormatSmall::FormatSmall()
	{
		_longLecteur = 300;
		_largLecteur = 300;
	}

	void FormatSmall::createFormat()
	{
		_window = new sf::RenderWindow(sf::VideoMode(_longLecteur,_largLecteur), "Lecteur Audio mp3");
	}
	
	int FormatSmall::getLongueur()
	{
		return _longLecteur;
	}

	int FormatSmall::getLargeur()
	{
		return _largLecteur;
	}

	sf::RenderWindow* FormatSmall::getWindow()
	{
		return _window;
	}
