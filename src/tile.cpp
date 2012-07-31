#include "tile.h"

using namespace std;

Tile::Tile(TileType type, int x, int y, int z) {
  m_xPos = x;
  m_yPos = y;
  m_zPos = z;
  m_type = type;
}

Tile::~Tile() {
}

Tile::TileType Tile::getType() {
  return m_type;
}

sf::Texture* Tile::getTexture() {
  return m_texture;
}

int* Tile::getPos() {
  int arry[3] = {m_xPos, m_yPos, m_zPos};
  return arry;
}
