#ifndef ETAT
#define ETAT
#include <SFML/Audio.hpp>
#include <iostream>

class Audio;
class Etat 
{
	public:
			//Passe de l'etat courant à l'état lecture
			void actionLecture(sf::Sound* sound);
			//Passe de l'etat courant à l'état arrêt
			void actionArret(sf::Sound* sound);
			//Passe de l'etat courant à l'état pause
			void actionPause(sf::Sound* sound);
			//Selon l'état corant affiche l'état de la lecture en cours
			virtual void affiche()=0;
};
#endif
