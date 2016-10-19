#include <SFML/Graphics.hpp>

int main()
{
/* création de l'objet fenetre avec 
 en parametres ses dimensions et son nom */
    sf::RenderWindow window(sf::VideoMode(800, 600), "Lecteur audio MP3");

// lancement de la boucle principale
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
             // evènements agissant sur clavier
             // Mettre en pause ou en Lecture...
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Pause)) 
				window.setActive();
            // se déplacer en haut...
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) 
				window.setActive();
            // se déplacer à bas...
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) 
				window.setActive();
            // se déplacer à gauche...
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
				window.setActive();
			// déplacer vers la droite... 
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
				window.setActive();
				
			// evènements agissant sur la souris
			else if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) 
				window.setActive();
			else if (sf::Mouse::isButtonPressed(sf::Mouse::Right)) 
				window.setActive();
			else if (sf::Mouse::isButtonPressed(sf::Mouse::Middle)) 
				window.setActive();
		}
// a chaque tour de boucle on met à jour...
        window.clear(); //...effacer
        window.draw(); //...dessiner tous les objets
        window.display(); //...afficher
    }

    return 0;
}
