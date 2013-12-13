////
////  MainMenu.h
////  GAM-1514 OSX Game
////
////  Created by Bradley Flood on 2013-10-07.
////  Copyright (c) 2013 Algonquin College. All rights reserved.
////

#ifndef __GAM_1514_OSX_Game__Settings__
#define __GAM_1514_OSX_Game__Settings__

#include "Menu.h"


class Settings : public Menu
{
public:
	Settings();
	~Settings();

	const char* getName();
	//	int getlives();
	//	void setlives(int lives);
	//	int lives;
	//protected:
	//	int m_lives;
private:
	void buttonAction(UIButton* button);
	//	void toggleAction(UIToggle* toggle);
};

#endif /* defined(__GAM_1514_OSX_Game__MainMenu__) */
