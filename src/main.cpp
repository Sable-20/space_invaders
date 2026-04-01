#include <SFML/Graphics.hpp>
#include "player.h"

int main()
{
  sf::RenderWindow window(sf::VideoMode({500, 800}), "Space Invaders", sf::Style::Default);

  // TODO: instantiate clock text etc
  sf::Clock clock;

  sf::Texture spritesheet;
  spritesheet.loadFromFile("./src/assets/invaders_sheet.png");
  sf::Sprite invader(spritesheet);
  invader.setTextureRect(sf::IntRect(sf::Vector2i(0, 0), sf::Vector2i(32, 32)));

  Player player(200, 700);

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

    // TODO: spawn multiple invaders
    // TODO: make an invader class
    // TODO: move invaders incrementally


    //////////////////////////
    // PLAYER INPUT HANDLING
    //////////////////////////

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape)) 
    {
      window.close();
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
    {
      player.moveLeft();
    } else 
    {
      player.stopLeft();
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
    {
      player.moveRight();
    } else
    {
      player.stopRight();
    }

    //////////////////////////
    // UPDATE HERE
    //////////////////////////

    player.update(dt);

    //////////////////////////
    // DRAWING
    //////////////////////////
    window.clear();

    window.draw(player.getShape());
    window.draw(invader);

    window.display();
  }
}
