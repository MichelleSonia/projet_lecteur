#include "EtatArret.hpp"
#include "../Audio.hpp"

	//Constructeur par défaut
	EtatArret::EtatArret(){}
	//Constructeur
	EtatArret::EtatArret(Audio* audio)
	{
		_audio = audio;
	} 
	
	void EtatArret::actionLecture(sf::Sound* sound)
	{
		//on démarre la lecture 
		sound->play();
		_audio->setEtat(_audio->getEtatPause());
	} 
	
	void EtatArret::affiche()
	{
		std::cout << "Musique en arret" << std::endl;
	}
