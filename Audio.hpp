//#include "AbstractFactory/audioInterfaceFactory.hpp"
#include "Dir/Dir.hpp"

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>
//#include <sfeMovie/Movie.hpp>

//#include "State/Etat.hpp"
//#include "State/EtatLecture.hpp"
//#include "State/EtatPause.hpp"
//#include "State/EtatArret.hpp"

class Audio
{
	private:
			Interface _inter;
			Dir _dir;		
			Etat* _eC;
			EtatLecture _eL;
			EtatPause _eP;
			EtatArret _eA;
	public:
			void actionLecture(); 
			void actionArret();
			void actionSuivant();
			void actionPrecedent();
		
	//Constructeur de la factory de l'interface audio
	Audio(AudioInterfaceFactory* audioInterFact);
	//Destructeur
	~Audio();

	//Fonction de test
	void affiche();

	//Lance l'audio et permet ainsi à l'utilisteur d'effectuer des actions
	void tourne();

	//Accesseurs
	// getteur se renseigner de l'état de l'attribut eCourant
	Etat* geteCourant();
	// getteur pointeur sur l'état lecture
	Etat* geteLecture();
	// getteur pointeur sur l'état pause
	Etat* getePause();
	// getteur pointeur sur l'état arrêt
	Etat* geteArret();
	
	// setteur modifier l'etat de l'attribut eCourant
	void seteCourant(Etat* eC);
	
	//Passe de l'etat courant à l'état lecture
	void actionLecture(sf::Sound* sound);
	//Passe de l'etat courant à l'état arrêt
	void actionArret(sf::Sound* sound);
	//Passe de l'etat courant à l'état pause
	void actionPause(sf::Sound* sound);
};

