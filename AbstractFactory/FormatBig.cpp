#include "FormatBig.hpp"

	FormatBig::FormatBig()
	{
		_longLecteur = 500;
		_largLecteur = 400;
	}

	void FormatBig::createFormat()
	{
		_window = new sf::RenderWindow(sf::VideoMode(_longLecteur,_largLecteur), "Grand format");
	}

	int FormatBig::getLongueur()
	{
		return _longLecteur;
	}

	int FormatBig::getLargeur()
	{
		return _largLecteur;
	}

	sf::RenderWindow* FormatBig::getWindow()
	{	    
		return _window;
	}
