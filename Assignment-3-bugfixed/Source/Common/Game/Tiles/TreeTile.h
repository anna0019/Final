//
//  TreeTile.h
//  GAM-1514 Game
//
//  Created by Dan Lingman on 2013-11-09.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#ifndef TREE_TILE_H
#define TREE_TILE_H

#include "Tile.h"


class TreeTile : public Tile
{
public:
	TreeTile(const char* textureName = RES_TILE_TREE);
	virtual ~TreeTile();

	//Return the type of the tile
	const char* getType();
	int getWeight();
};

#endif
