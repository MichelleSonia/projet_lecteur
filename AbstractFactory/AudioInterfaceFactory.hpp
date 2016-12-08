//Création de l'interface lors de la lecture d'un fichier
#ifndef AUDIOINTERFACEFACTORY_H
#define AUDIOINTERFACEFACTORY_H
 
#include "InterfaceFactory.hpp"

#include "Interface.hpp"
#include "Buttons.hpp"
#include "FormatSmall.hpp"
 
class AudioInterfaceFactory : public InterfaceFactory
{
	public:
		
		//Création de la bonne interface à la lecture d'un fichier
		 Interface createInterface(Buttons* bouton, Format* format);
};

#endif
