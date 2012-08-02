#include "graphics.h"

using namespace std;

Graphics::Graphics() {
  makeMenu();
}

Graphics::~Graphics() {
}

void Graphics::drawMenu(sf::RenderWindow *app) {
  app->draw(m_buttons[0]->getText());
  app->draw(m_buttons[1]->getText());
  app->draw(m_buttons[2]->getText());
}

void Graphics::makeMenu() {
  Button *startButton = new Button("Start", 380, 150, sf::Color::White);
  Button *optionsButton = new Button("Options", 365, 250, sf::Color::Red);
  Button *quitButton = new Button("Quit", 380, 350, sf::Color::Red);

  m_buttons[0] = startButton;
  m_buttons[1] = optionsButton;
  m_buttons[2] = quitButton;
}
