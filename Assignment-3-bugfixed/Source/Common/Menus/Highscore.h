//
//  MainMenu.h
//  GAM-1514 OSX Game
//
//  Created by Bradley Flood on 2013-10-07.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#ifndef __GAM_1514_OSX_Game__Highscore__
#define __GAM_1514_OSX_Game__Highscore__

#include "Menu.h"


class Highscore : public Menu
{
public:
	Highscore();
	~Highscore();

	const char* getName();

private:
	void buttonAction(UIButton* button);
};

#endif /* defined(__GAM_1514_OSX_Game__MainMenu__) */
