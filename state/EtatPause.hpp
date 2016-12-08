#ifndef ETATPAUSE_H
#define ETATPAUSE_H
#include "Etat.hpp"

class EtatPause : public Etat
{
	private:
			Audio* _audio;
	public:
			//Constructeur par défaut
			EtatPause();
			//Constructeur
			EtatPause(Audio* audio);
			//Passe de l'etat courant à l'état arrêt
			void actionArret(sf::Sound* sound);
			//Passe de l'etat courant à l'état lecture
			void actionLecture(sf::Sound* sound);
			//Affiche l'état pause
			void affiche();
};
#endif
