#include "ButtonsA.hpp"

#define THEME_CONFIG_FILE "src/widgets/Black.conf"

ButtonsVA::ButtonsA()
{
    _bLecture = 0;
    _bPause = 0;
    _bArret = 0;
}

ButtonsVA::ButtonsA(tgui::Button::Ptr bLecture, tgui::Button::Ptr bPause, tgui::Button::Ptr bArret)
{
	_bLecture = bLecture;
	_bPause = bPause;
	_bArret = bArret;
}

tgui::Button::Ptr ButtonsA::getButtonPl() { return _bLecture; }
tgui::Button::Ptr ButtonsA::getButtonPa() { return _bPause; }
tgui::Button::Ptr ButtonsA::getButtonSt() { return _bst; }
tgui::Button::Ptr ButtonsA::getButtonNI() {}
tgui::Button::Ptr ButtonsA::getButtonPI() {}

void ButtonsVA::createButtons(tgui::Gui* gui) 
{
    tgui::Button::Ptr buttonPlay(*gui);
    buttonPlay->load(THEME_CONFIG_FILE);
    buttonPlay->setPosition(0, 570);
    buttonPlay->setText("Play");
    buttonPlay->setCallbackId(1);
    buttonPlay->bindCallback(tgui::Button::LeftMouseClicked);
    buttonPlay->setSize(30, 30);
    _bLecture = buttonPlay;
    gui->add(buttonPlay,"boutonLecture");
    

    tgui::Button::Ptr buttonPause(*gui);
    buttonPause->load(THEME_CONFIG_FILE);
    buttonPause->setPosition(60, 570);
    buttonPause->setText("Pause");
    buttonPause->setCallbackId(2);
    buttonPause->bindCallback(tgui::Button::LeftMouseClicked);
    buttonPause->setSize(30, 30);
    _bPause = buttonPause;
    gui->add(buttonPause,"boutonPause");

    tgui::Button::Ptr buttonStop(*gui);
    buttonStop->load(THEME_CONFIG_FILE);
    buttonStop->setPosition(120, 570);
    buttonStop->setText("Stop");
    buttonStop->setCallbackId(3);
    buttonStop->bindCallback(tgui::Button::LeftMouseClicked);
    buttonStop->setSize(30, 30);
    _bArret = buttonStop;
    gui->add(buttonStop,"boutonArret");
}
