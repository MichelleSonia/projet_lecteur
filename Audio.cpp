#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>
#include <sfeMovie/Movie.hpp>

#define THEME_CONFIG_FILE "src/widgets/Black.conf"

#include "AbstractFactory/buttons.hpp"
#include "AbstractFactory/formatSmall.hpp"

	//Constructeur de la factory de l'interface audio
	Audio::Audio(AudioInterfaceFactory* audioInterFact)
	{
		Buttons* bouton = new Buttons();
		FormatSmall* fs = new FormatSmall();
		_inter = audioInterFact->creerInterface(bouton,fs);

		EtatArret eA(this);
		EtatLecture eL(this);
		EtatPause eP(this);
    
		_eC = &(eA); //pourquoi passage par référence;
		_eL = eL;
		_eP = eP;
		_eA = eA;	
	}
	
	//Destructeur
	Audio::~Audio(){}
	
	//getteur se renseigner de l'état de l'attribut eCourant
	Etat* Audio::geteCourant(){ return _eC; }
	// setteur
	void Audio::SeteCourant(Etat* eC)
	{ 
		_eC = eC; 
		_eC->affiche();
	}
	
	// getteur pointeur sur l'état lecture
	EtatLecture* Audio::geteLecture(){return &_eL;}
	// getteur pointeur sur l'état pause
	EtatPause* Audio::getePause(){return &_eP;}
	// getteur pointeur sur l'état arrêt
	EtatArret* Audio::geteArret(){return &_eA;}

		
	//Passe de l'etat courant à l'état lecture
	void Audio::actionLecture(sf::Sound* sound)
	{
		_eC->actionLecture(sound);
	}
	
	//Passe de l'etat courant à l'état arrêt
	void Audio:: actionArret(sf::Sound* sound)
	{
		_eC->actionPause(sound);
	}
	//Passe de l'etat courant à l'état pause
	void Audio::actionPause(sf::Sound* sound)
	{
		_eC->actionArret(sound);
	}
	
	//Fonction de test
	void Audio::affiche()
	{
		std::cout << "Audio" << std:endl;
	}

	//Lance l'audio et permet ainsi à l'utilisteur d'effectuer des actions
	void Audio::tourne()
	{
		sf::SoundBuffer buffer;
		sf::Sound sound;
		
		tgui::Callback callback;
		tgui::Picture::Ptr picture(*(_inter.getGui()));
		picture->load("src/fonts/fond-blanc.png");
		
		_dir.setFilesVector("ressources/Musique");
		_dir.createDirWidget(_inter.getGui());
		
		while(_inter.getFormat()->getWindow()->isOpen())
		{
			sf::Event event;
			while(_inter.getFormat->getWindow()->pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
				{
					_inter.getFormat()->getWindow()->close();
				}
				_inter.getGui()->handleEvent(event);
			}

			while (_inter.getGui()->pollCallback(callback))
			{
				if (callback.id == 1)
				{            
					actionLecture(&sound);
				}
				else if (callback.id == 2)
				{
					actionPause(&sound);
				}
				else if (callback.id == 3)
				{
					actionArret(&sound);

				}
				else if(callback.id==5)
				{
					buffer.loadFromFile(_dir.returnPath(_dir.getItemSelected()));
					sound.setBuffer(buffer);
				}
			}
        _inter.getFormat()->getWindow()->clear();
        _inter.getGui()->draw();
        _inter.getFormat()->getWindow()->display();)
		}
	}

	

	
