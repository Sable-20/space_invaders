#include "player.h"
#include <SFML/Graphics.hpp>

int main()
{
  sf::RenderWindow window(sf::VideoMode({800, 600}), "Space Invaders", sf::Style::Default);

  // TODO: instantiate clock text etc
  sf::Clock clock;

  Player player(400, 500);

  while (window.isOpen())
  {
    sf::Time dt = clock.restart();
    while (const std::optional event = window.pollEvent())
    {
      if (event->is<sf::Event::Closed>())
      {
        window.close();
      }
    }

    //////////////////////////
    // PLAYER INPUT HANDLING
    //////////////////////////

    // TODO add player input handling

    //////////////////////////
    // UPDATE HERE
    //////////////////////////

    //////////////////////////
    // DRAWING
    //////////////////////////
    window.clear();
    window.display();
  }
}
