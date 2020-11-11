/******************************
 * 2020_2_C_Final Project
 * This program is the game that named baby whale 
 * 2017430030 Lee JunBeom
 * 2017430039 Joo YoungHoon
 * ***************************/

#include "main.h"

int main(int argc, char *argv[])
{
	memset(&app, 0, sizeof(App));
	memset(&babywhale, 0, sizeof(Entity));
	
	initSDL();
	
	atexit(cleanup);

	babywhale.x = 250;
	babywhale.y = 200;
	babywhale.texture = loadTexture("gfx/babywhale.png");
	babywhale.flip = SDL_FLIP_NONE;

	while (1)
	{
		prepareScene();
		
		doInput();
		
		if (app.up)
		{
			babywhale.y -= 6;
		}
		
		if (app.down)
		{
			babywhale.y += 6;
		}
		
		if (app.left)
		{
			babywhale.x -= 6;
			babywhale.flip = SDL_FLIP_HORIZONTAL;
		}
		
		if (app.right)
		{
			babywhale.x += 6;
			babywhale.flip = SDL_FLIP_NONE;
		}

		blit(babywhale.texture, babywhale.x, babywhale.y, babywhale.flip);

		presentScene();
		
		SDL_Delay(16);
	}

	return 0;
}
