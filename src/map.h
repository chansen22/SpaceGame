#ifndef MAP_H
#define MAP_H

#include <iostream>
#include "tile.h"

using namespace std;

class Map {
  public:
    Map();
    ~Map();
    void generateMap();
  private:
    int m_xMapSize;
    int m_yMapSize;
    Tile* m_map[100][100][100];
};

#endif
