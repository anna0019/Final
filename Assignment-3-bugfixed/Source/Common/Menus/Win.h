//
//  MainMenu.h
//  GAM-1514 OSX Game
//
//  Created by Bradley Flood on 2013-10-07.
//  Copyright (c) 2013 Algonquin College. All rights reserved.
//

#ifndef __GAM_1514_OSX_Game__Win__
#define __GAM_1514_OSX_Game__Win__

#include "Menu.h"


class Win : public Menu
{
public:
	Win();
	~Win();

	const char* getName();

private:
	void buttonAction(UIButton* button);
};

#endif /* defined(__GAM_1514_OSX_Game__MainMenu__) */
