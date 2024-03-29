//Include SDL functions and datatypes
#include "SDL/SDL.h"

int main( int argc, char* args[] )
{
	//The images
	SDL_Surface* hello = NULL;
	SDL_Surface* screen = NULL;
	
	//Start SDL
	SDL_Init(SDL_INIT_VIDEO);
	
	//Set up screen
	screen = SDL_SetVideoMode(480, 272, 32, SDL_SWSURFACE);
	
	//Load image
	hello = SDL_LoadBMP("hello.bmp");
	
	//Apply image to screen
	SDL_BlitSurface(hello, NULL, screen, NULL);
	
	//Update Screen
	SDL_Flip(screen);
	
	//Pause
	SDL_Delay(2000);
	
	//Free the loaded image
	SDL_FreeSurface(hello);
	
	//Quit SDL
	SDL_Quit();
	
	return 0;
}
