//
//  TowerTile.cpp
//  GAM-1514 Game
//
//  Created by Dan Lingman on 2013-11-09.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#include "TowerTile.h"
#include "../../OpenGL/OpenGL.h"
#include "../../Constants/Constants.h"


TowerTile::TowerTile(const char* textureName) : Tile(TileTypeTower, textureName, true)
{

}

TowerTile::~TowerTile()
{

}

const char* TowerTile::getType()
{
	return TOWER_TOWER_TYPE;
}
int TowerTile::getWeight()
{
	return 100;
}
bool TowerTile::isWalkableTile()
{
	return false;
}
