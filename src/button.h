#ifndef BUTTON_H
#define BUTTON_H

#include <SFML/Graphics.hpp>
#include <string>

using namespace std;

class Button {
  public:
    Button(string buttonText, int xPos, int yPos, sf::Color color);
    ~Button();
    sf::Text getText()
    {return m_text;}
  private:
    sf::Text m_text;
    bool m_isSelected, m_isDrawing, m_isFocus;
    int m_xPos, m_yPos;
    sf::Color m_color;
};

#endif
