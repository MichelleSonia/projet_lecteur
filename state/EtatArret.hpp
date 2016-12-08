#ifndef ETATARRET_H
#define ETATARRET_H
#include "Etat.hpp"

class EtatArret : public Etat
{
	private:
			Audio _audio;
	public:
			//Constructeur par défaut
			EtatArret();
			//Constaructeur 
			EtatArret(Audio* audio);
			//Passe de l'etat courant à l'état lecture
			void actionLecture(sf::Sound* sound);
			//Affiche l'état arrêt
			void affiche();
};
