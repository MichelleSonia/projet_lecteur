#ifndef ETATLECTURE
#define ETATLECTURE
#include "Etat.hpp"

class EtatLecture : public Etat
{
	private:
			Audio* _audio;
	public:
			//Constructeur par défaut
			EtatLecture();
			//Constaructeur 
			EtatLecture(Audio* audio);
			//Passe de l'etat courant à l'état arrêt
			void actionArret(sf::Sound* sound);
			//Passe de l'etat courant à l'état pause
			void actionPause(sf::Sound* sound);
			//Affiche l'état lecture
			void affiche();
};
