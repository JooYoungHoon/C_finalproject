/******************************
 * 2020_2_C_Final Project
 * This program is the game that named baby whale 
 * 2017430030 Lee JunBeom
 * 2017430039 Joo YoungHoon
 * ***************************/

#include "common.h"

extern void cleanup(void);
extern void initSDL(void);
extern SDL_Texture *loadTexture(char *filename);
extern void prepareScene(void);
extern void presentScene(void);
extern void doInput(void);
extern void blit(SDL_Texture *texture, int x, int y, SDL_RendererFlip flip);

App app;
Entity babywhale;