//
//  Player.cpp
//  GAM-1532 OSX Game
//
//  Created by Bradley Flood on 2013-03-07.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#include "Player.h"
#include "Level.h"
#include "Tiles/Tile.h"
#include "../OpenGL/OpenGL.h"
#include "../Constants/Constants.h"
#include <stdlib.h>
#include <algorithm>
#include <math.h>
#include "../Path/FastPathFinder.h"
#include "../Utils/Logger/Logger.h"
#include "../Menus/Settings.h"

Player::Player(Level* aLevel) :Unit(aLevel)
{
	setScore(20);
}

Player::~Player()
{

}

const char* Player::getType()
{
	return PLAYER_TYPE;
}

Tile *Player::getCurrentTile()
{
	return m_CurrentTile;
}

//int Player::getLivesLeft() const
//{
//	return lives;
//}
//
//void Player::Test()
//{
//	lives = 3;
//	dead = false;
//}
//
//void Player::LoseALife()
//{
//	lives--;
//}
//
//bool Player::isDead() const
//{
//	return dead;
//}
//
//void Player::Dead()
//{
//	//won = false;
//	dead = true;
//}
