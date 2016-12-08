#include "AudioInterfaceFactory.hpp"

Interface AudioInterfaceFactory::createInterface(Buttons* bouton, Format* format)
{
	// Création du format
	format->createFormat();

	// Création des boutons
	tgui::Gui* gui = new tgui::Gui(*(format->getWindow()));
	gui->setGlobalFont("src/fonts/DejaVuSans.ttf");

	bouton->createButtons(gui);

	Interface inter(bouton,format,gui);
	return inter;
}
