#include "button.h"

using namespace std;

Button::Button(string buttonText, int xPos, int yPos, sf::Color color) {
  m_text.setString(buttonText);
  m_text.setPosition(xPos, yPos);
  m_text.setColor(color);
  m_isFocus = false;
  m_isSelected = false;
  m_isDrawing = false;
}

Button::~Button() {
}
