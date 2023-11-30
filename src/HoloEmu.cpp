#define SDL_MAIN_USE_CALLBACKS
#include <SDL.h>
#include <SDL_main.h>

SDL_Window* window = NULL;

int SDL_AppInit(int argc, char** argv)
{ 
	SDL_Init(SDL_INIT_VIDEO);

	window = SDL_CreateWindow("HoloEmu - Core", 800, 600, 0);
	if (window == NULL) {
		exit;
	}

	return 0;
}

int SDL_AppIterate(void) {
	return 0;

}

int SDL_AppEvent(const SDL_Event* event) {
	
	if (event->type == SDL_EVENT_QUIT)
		return 1;

	return 0;
}

void SDL_AppQuit(void) {
	SDL_DestroyWindow(window);
	window = NULL;
	SDL_Quit();
}