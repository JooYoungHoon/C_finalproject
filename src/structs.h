/******************************
 * 2020_2_C_Final Project
 * This program is the game that named baby whale 
 * 2017430030 Lee JunBeom
 * 2017430039 Joo YoungHoon
 * ***************************/

typedef struct {
	SDL_Renderer *renderer;
	SDL_Window *window;
	int up;
	int down;
	int right;
	int left;
} App;

typedef struct {
	int x;
	int y;
	SDL_Texture *texture;
	SDL_RendererFlip flip;
} Entity;