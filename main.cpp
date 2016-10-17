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
            
            //etc...
        }
// a chaque tour de boucle on met à jour...
        window.clear(); //...effacer
        window.draw(); //...dessiner tous les objets
        window.display(); //...afficher
    }

    return 0;
}
