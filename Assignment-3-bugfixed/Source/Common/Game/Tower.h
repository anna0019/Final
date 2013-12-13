//
//  Tower.h
//  GAM-1532 OSX Game
//
//  Created by Bradley Flood on 2013-03-07.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#ifndef PLAYER_TOWER_H
#define PLAYER_TOWER_H

#include "GameObject.h"
#include <vector>
#include "Unit.h"
class Level;
class Tile;
class FastPathFinder;

class Tower : public Unit
{
public:
	Tower(Level* level);
	virtual ~Tower();

	//Update, paint and reset methods
	//void update(double delta);
	void paint();
	//void reset();

	//Implementing GameObject's pure virtual method
	const char* getType();

	//Setter methods for the current and destination tiles
//	void reachedDestination();
protected:

};

#endif