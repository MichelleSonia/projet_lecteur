//Création des boutons selonle média audio/image

#ifndef BUTTONS_H
#define BUTTONS_H

#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>

class Buttons
{
	public:
			virtual void createButtons(tgui::Gui* gui)=0;

			//getteur virtuel pour le bouton play
			virtual tgui::Button::Ptr getButtonPl()=0;

			//getteur virtuel pour le bouton pause
			virtual tgui::Button::Ptr getButtonSt()=0;
			
			//getteur virtuel pour le bouton arret
			virtual tgui::Button::Ptr getButtonPa()=0;
			
};

#endif
