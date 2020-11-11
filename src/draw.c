/******************************
 * 2020_2_C_Final Project
 * This program is the game that named baby whale 
 * 2017430030 Lee JunBeom
 * 2017430039 Joo YoungHoon
 * ***************************/

#include "draw.h"

void prepareScene(void)
{
	SDL_SetRenderDrawColor(app.renderer, 96, 128, 255, 255);
	SDL_RenderClear(app.renderer);
}

void presentScene(void)
{
	SDL_RenderPresent(app.renderer);
}

SDL_Texture *loadTexture(char *filename)
{
	SDL_Texture *texture;

	SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO, "Loading %s", filename);

	texture = IMG_LoadTexture(app.renderer, filename);

	return texture;
}

void blit(SDL_Texture *texture, int x, int y, SDL_RendererFlip flip)
{
	SDL_Rect dest;
	SDL_Point center;

	dest.x = x;
	dest.y = y;

	SDL_QueryTexture(texture, NULL, NULL, &dest.w, &dest.h);
	
	center.x = dest.w / 2;
	center.y = dest.h / 2;

	SDL_RenderCopyEx(app.renderer, texture, NULL, &dest, 0.0, &center, flip);
}