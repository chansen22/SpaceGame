#ifndef MAP_H
#define MAP_H

#include <iostream>

using namespace std;

class Map {
  public:
    Map();
    ~Map();
    void generateMap();
  private:
    int m_xMapSize;
    int m_yMapSize;
    int m_map[100][100];
};

#endif
