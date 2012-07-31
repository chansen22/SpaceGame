#include "map.h"

using namespace std;

Map::Map() {
  for(int i = 0; i < 100; i++)
    for(int j = 0; j < 100; j++)
      m_map[i][j] = 0;
}

Map::~Map() {
}

void Map::generateMap() {
  
}
