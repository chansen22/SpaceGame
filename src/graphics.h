#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

#include "button.h"

using namespace std;

class Graphics {
  public:
    Graphics();
    ~Graphics();
    void drawMenu(sf::RenderWindow *app);
  private:
    void makeMenu();
    Button *m_buttons[20];
};

#endif
