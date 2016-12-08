#include "EtatPause.hpp"
#include "../Audio.hpp"

	//Constructeur par défaut
	EtatPause::EtatPause(){}
	//Constructeur
	EtatPause::EtatPause(Audio* audio)
	{
		_audio = audio;
	} 
	
	void EtatPause::actionLecture(sf::Sound* sound)
	{
		//on démarre la lecture 
		sound->play();
		_audio->setEtat(_audio->getEtatPause());
	} 
	
	void EtatPause::actionArret(sf::Sound* sound)
	{
		//on arrête la lecture et on se replace au début
		sound->stop();
		_audio->setEtat(_audio->getEtatArret());
	} 
	
	void EtatPause::affiche()
	{
		std::cout << "Musique en pause" << std::endl;
	}
	
	
