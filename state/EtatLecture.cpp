#include "EtatLecture.hpp"
#include "../Audio.hpp"

	//Constructeur par défaut
	EtatLecture::EtatLecture(){}
	//Constructeur
	EtatLecture::EtatLecture(Audio* audio)
	{
		_audio = audio;
	} 
	void EtatLecture::actionArret(sf::Sound* sound)
	{
		//on arrête la lecture et on se replace au début
		sound->stop();
		_audio->setEtat(_audio->getEtatArret());
	} 
	
	void EtatLecture::actionPause(sf::Sound* sound)
	{
		//on met la lecture en pause
		sound->pause();
		_audio->setEtat(_audio->getEtatPause());
	} 
	
	void EtatLecture::affiche()
	{
		std::cout << "Musique en lecture" << std::endl;
	}
	
	
