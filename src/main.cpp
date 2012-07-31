#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include "map.h"

using namespace std;

int main() {
  sf::RenderWindow App(sf::VideoMode(800, 600, 32), "SpaceGame");

  sf::Clock Clock;
  sf::Event Event;

  sf::Text text("Words");

  Map *map = new Map();

  while(App.isOpen()) {
    while(App.pollEvent(Event)) {
      if(Event.type == sf::Event::Closed)
        App.close();
      else if(Event.type == sf::Event::Resized) {
        sf::FloatRect fr(0, 0, Event.size.width, Event.size.height);
        App.setView(sf::View(fr));
      }
    }

    App.clear();
    App.draw(text);
    App.display();
  }
  return 0;
}
