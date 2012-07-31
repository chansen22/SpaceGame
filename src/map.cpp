#include "map.h"

using namespace std;

Map::Map() {
  for(int x = 0; x < 100; x++)
    for(int y = 0; y < 100; y++)
      for(int z = 0; z < 100; z++)
        m_map[x][y][z] = new Tile(Tile::Empty, x, y, z);
  // Usage of getPos
  //int* arry = m_map[1][2][3]->getPos();
  //cout << "The position of tile at 1,2,3 is " << arry[0] 
  //     << "," << arry[1] << "," << arry[2] << "." << endl;
}

Map::~Map() {
}

void Map::generateMap() {
  
}
