////
////  MainMenu.cpp
////  GAM-1514 OSX Game
////
////  Created by Bradley Flood on 2013-10-07.
////  Copyright (c) 2013 Algonquin College. All rights reserved.
////

#include "../Game/Player.h"
#include "Settings.h"
#include "../UI/UIButton.h"
#include "../UI/UIToggle.h"
#include "../Game/Game.h"
#include "../Game/Level.h"
#include "../Screen Manager/ScreenManager.h"
#include "../Libraries/jsoncpp/json.h"
#include <stdlib.h>
#include <fstream>

Settings::Settings() : Menu(NULL, NULL) 
{
	m_Background = new OpenGLTexture("GameSettingsBackground");
	addButton(new UIButton("ButtonLoadLevel"));
	addButton(new UIButton("Tile3"));
	addButton(new UIButton("Tile5"));
	addButton(new UIButton("Tile7"));

}

Settings::~Settings()
{
	if(m_Background != NULL)
	{
		delete m_Background;
		m_Background = NULL;
	}
}

const char* Settings::getName()
{
	return SETTINGS_SCREEN_NAME;
}

//int Settings::getlives()
//{
//	return lives;
//}
//
//void Settings::setlives(int lives)
//{
//	m_lives = lives;
//}

void Settings::buttonAction(UIButton* button)
{
	int index = getIndexForButton(button);
	if(index == 0)
	{	
		ScreenManager::getInstance()->switchScreen(MAIN_MENU_SCREEN_NAME);
	}
	else if(index == 1)
	{	
		//Json::Value root;
		//Json::Reader reader;
		//bool success = reader.parse("Lives.json",root,false);
		//int lives = root["Lives"].asInt();

		//root["Lives"] = 3;
		//std::ofstream out;
		//out.open("Lives.json")
		//out << root;
		//out.close();
		//		setlives(3);
		ScreenManager::getInstance()->switchScreen(MAIN_MENU_SCREEN_NAME);
	}	
	else if(index == 2)
	{	
		/*	setlives(5);*/
		ScreenManager::getInstance()->switchScreen(MAIN_MENU_SCREEN_NAME);
	}	
	else if(index == 3)
	{	
		/*	setlives(7);	*/	
		ScreenManager::getInstance()->switchScreen(MAIN_MENU_SCREEN_NAME);
	}
}


