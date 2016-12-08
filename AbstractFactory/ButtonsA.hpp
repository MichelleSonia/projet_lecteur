//Création des boutons pour l'audio

#ifndef BUTTONSVA_H
#define BUTTONSVA_H

#include "Buttons.hpp"

#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>

class ButtonsVA : public Buttons
{
	private:
			tgui::Button::Ptr _bLecture;
			tgui::Button::Ptr _bPause;
			tgui::Button::Ptr _bArret;
	public:

		//Constructeur par défaut
		ButtonsA();

		//Constructeur
		ButtonsVA(tgui::Button::Ptr bLecture, tgui::Button::Ptr bPause, tgui::Button::Ptr bArret);

		//getteurs
		tgui::Button::Ptr getButtonLecture();
		tgui::Button::Ptr getButtonPause();
		tgui::Button::Ptr getButtonArret();

		//Crée le bouton audio et stocke dans un vecteur
		void createButtons(tgui::Gui* gui);
};

#endif
