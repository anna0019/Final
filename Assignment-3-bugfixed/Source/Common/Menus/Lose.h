//
//  MainMenu.h
//  GAM-1514 OSX Game
//
//  Created by Bradley Flood on 2013-10-07.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#ifndef __GAM_1514_OSX_Game__Lose__
#define __GAM_1514_OSX_Game__Lose__

#include "Menu.h"


class Lose : public Menu
{
public:
	Lose();
	~Lose();

	const char* getName();

private:
	void buttonAction(UIButton* button);
};

#endif /* defined(__GAM_1514_OSX_Game__MainMenu__) */
