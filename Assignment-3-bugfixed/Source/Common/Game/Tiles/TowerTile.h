//
//  Tower.h
//  GAM-1514 Game
//
//  Created by Dan Lingman on 2013-11-09.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#ifndef TOWER_TILE_H
#define TOWER_TILE_H

#include "Tile.h"


class TowerTile : public Tile
{
public:
	TowerTile(const char* textureName = RES_TILE_TOWER);
	virtual ~TowerTile();

	virtual bool isWalkableTile();
	//Return the type of the tile
	const char* getType();
	int getWeight();

};

#endif
