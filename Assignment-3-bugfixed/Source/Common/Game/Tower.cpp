//
//  Tower.cpp
//  GAM-1532 OSX Game
//
//  Created by Bradley Flood on 2013-03-07.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#include "Tower.h"
#include "Level.h"
#include "Tiles/Tile.h"
#include "../OpenGL/OpenGL.h"
#include "../Constants/Constants.h"
#include <stdlib.h>
#include <algorithm>
#include <math.h>
#include "../Path/FastPathFinder.h"
#include "../Utils/Logger/Logger.h"
#include "../Screen Manager/ScreenManager.h"

Tower::Tower(Level* aLevel):Unit(aLevel)
{
	setScore(10);
}

Tower::~Tower()
{

}

const char* Tower::getType()
{
	return TOWER_TYPE;
}
void Tower::paint()
{
	OpenGLTexture("Tower");
}

//void Tower::reachedDestination()
//{
//	if (m_CurrentTile == m_Level->getPlayerTile())
//	{
//		// we're done!
//		// GAME OVER MAN...
//
//		ScreenManager::getInstance()->switchScreen(LOSE_SCREEN_NAME);
//
//	}
//	setScore(10);
//	m_DestinationTile = m_Level->getPlayerTile();
//	m_Level->queueForPathFinding(this);
//
//}