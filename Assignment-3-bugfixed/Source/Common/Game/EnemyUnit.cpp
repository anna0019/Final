//
//  EnemyUnit.cpp
//  GAM-1532 OSX Game
//
//  Created by Bradley Flood on 2013-03-07.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#include "Player.h"
#include "EnemyUnit.h"
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
#include "../Menus/Settings.h"


EnemyUnit::EnemyUnit(Level* aLevel):Unit(aLevel)
{
	m_Lives = 3;
	Lose = false;
	setScore(10);
}

EnemyUnit::~EnemyUnit()
{

}

const char* EnemyUnit::getType()
{
	return ENEMY_TYPE;
}
void EnemyUnit::paint()
{
	//OpenGLTexture("Enemy");
	OpenGLRenderer::getInstance()->setForegroundColor(OpenGLColorRed());
	OpenGLRenderer::getInstance()->drawCircle(getX() + (getWidth() / 2), getY() + (getHeight() / 2), getWidth() / 2,true,12);
	OpenGLRenderer::getInstance()->setForegroundColor(PLAYER_OUTLINE_COLOR);
	OpenGLRenderer::getInstance()->drawCircle(getX() + (getWidth() / 2), getY() + (getHeight() / 2), getWidth() / 2, false,12);
}

//int EnemyUnit::thing()
//{
//	
//	return getlive;
//}


void EnemyUnit::reachedDestination()
{
	if (m_CurrentTile == m_Level->getPlayerTile())
	{
		ScreenManager::getInstance()->switchScreen(LOSE_SCREEN_NAME);
		//Lose == true;
	}
	setScore(10);
	m_DestinationTile = m_Level->getPlayerTile();
	m_Level->queueForPathFinding(this);

	//if( Lose == true)
	//{

	//	m_Lives --;
	//	if (m_Lives == 0)
	//	{
	//		ScreenManager::getInstance()->switchScreen(LOSE_SCREEN_NAME);
	//	}

}

