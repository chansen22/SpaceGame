#ifndef TILE_H
#define TILE_H

#include <SFML/Graphics.hpp>

class Tile {
  public:
    enum TileType {
      Empty = 0,
      Dirt,
      Grass,
      Rock,
      Wall
    };
    Tile(TileType type, int x, int y, int z);
    ~Tile();
    TileType getType();
    sf::Texture* getTexture();
    int* getPos();
  private:
    char m_id;
    TileType m_type;
    int m_xPos;
    int m_yPos;
    int m_zPos;
    sf::Texture* m_texture;
};

#endif
