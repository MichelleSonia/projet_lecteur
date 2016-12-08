//Création petit format

#ifndef FORMATSMALL_H
#define FORMATSMALL_H

#include "Format.hpp"

class FormatSmall : public Format
{
	private:
			int _longLecteur;
			int _largLecteur;
			sf::RenderWindow* _window;
	public:
			//Constructeur
			FormatSmall();
			//Création du format
			void createFormat();

			//getteurs
			//Retourne la longueur de la fenetre
			int getLongueur();
			//Retourne la largeur de la fenetre
			int getLargeur();
			//Retourne la fenetre de type RenderWindow
			sf::RenderWindow* getWindow();
};

#endif
