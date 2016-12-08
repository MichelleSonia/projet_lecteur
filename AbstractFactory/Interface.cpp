#include "interface.hpp"

#define THEME_CONFIG_FILE "src/widgets/Black.conf"

	Interface::Interface(){}

	Interface::Interface(Buttons* bouton, Format* format, tgui::Gui* gui)
	{
		_bouton = bouton;
		_format = format;
		_gui = gui;
	}

	Buttons* Interface::getButtons()
	{
		return _bouton;
	}

	Format* Interface::getFormat()
	{
		return _format;
	}

	tgui::Gui* Interface::getGui()
	{
		return _gui;
	}
