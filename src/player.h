#include <SFML/Graphics.hpp>

class Player
{
private:
  sf::Vector2f m_Position;
  sf::RectangleShape m_Shape;
  float m_Speed = 100.0f;
  bool m_MovingLeft;
  bool m_MovingRight;

public:
  Player(float x, float y);
  sf::FloatRect getPosition();
  sf::RectangleShape getShape();
  void moveLeft();
  void moveRight();
  void stopLeft();
  void stopRight();
  void update(sf::Time dt);
};
