#ifndef INTERFACE_H
#define INTERFACE_H

#include <vector>
#include "Formatormat.hpp"
#include "Buttons.hpp"
#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>

class Interface
{
	private:
		Buttons* _bouton;
		Format* _format;
		tgui::Gui* _gui;
	public:		
		//Constructeur par défaut
		Interface();
		//Constructeur
		Interface(Buttons* b, Format* f, tgui::Gui* gui);

		//getteurs
		//Retourne les boutons créés
		Buttons* getButtons();

		//Retourne le format créé
		Format* getFormat();
		
		//Retourne le gui de l'interface
		tgui::Gui* getGui();
};

#endif
