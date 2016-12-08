// Création du bon format selon le type de média

#ifndef FORMAT_H
#define FORMAT_H

#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>

class Format
{
	public:	

		//Crée le bon format selon le type de média
		virtual void createFormat()=0;
		
		//getteurs virtuels
		
		//Retourne la longueur de la fenetre
		virtual int getLongueur()=0;

		//Retourne la largeur de la fenêtre
		virtual int getLargeur()=0;
		
		// Retourne la fenetre de type RenderWindow
		virtual sf::RenderWindow* getWindow()=0;
};

#endif
