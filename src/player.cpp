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

void Player::moveLeft()
{
  m_MovingLeft = true;
}

void Player::stopLeft()
{
  m_MovingLeft = false;
}

void Player::moveRight()
{
  m_MovingRight = true;
}

void Player::stopRight()
{
  m_MovingRight = false;
}

void Player::update(sf::Time dt)
{
  if (m_MovingLeft) 
  {
    m_Position -= m_Speed * dt; 
  }
  if (m_MovingRight)
  {
    m_Position += m_Speed * dt;
  }

  m_Shape.setPosition(m_Position);
}
