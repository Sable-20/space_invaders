#include "player.h"

Player::Player(float x, float y) : m_Position(x, y)
{
  m_Shape.setSize(sf::Vector2f({50,50}));
  m_Shape.setPosition(m_Position);
}

sf::FloatRect Player::getPosition()
{
  return m_Shape.getGlobalBounds();
}

sf::RectangleShape Player::getShape()
{
  return m_Shape;
}

// TODO: move left, right, stop left, right, update

// update(sf::Time dt)