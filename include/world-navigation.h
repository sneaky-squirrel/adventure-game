#ifndef WORLD_NAVIGATION_H
#define WORLD_NAVIGATION_H

/*
 * If time permits, this file can be extended to include additional features such as:
 * 	+ Multiple Levels instead of a single level.
 * 	+ Variable Level Size
 * 		Current implementation only allows a fixed level size of 1024x1024
 * 	+ Restricted Movement
 * 		e.g. Restrict movement in certain directions such as North or West when inside certain cells.
 * 	+ List of Interactable Objects inside of a Location cell.
 * 		e.g. NPC character with interactive dialogue.
 * 		e.g. Monster to fight against.
 * 		e.g. Items to pick up.
 */
namespace world
{
	typedef enum
	{
		INVALID,
		NORTH,
		SOUTH,
		WEST,
		EAST
	} Direction;
}

#define MAX_SIZE_X 1024
#define MAX_SIZE_Y 1024

typedef struct
{
	int x;
	int y;
} Point;

typedef struct
{
	;
} Location;

int MoveCharacter( const world::Direction dir );

void PrintEdgeOfWorld();

extern Point current_player_position;

extern Location game_world[ MAX_SIZE_X ][ MAX_SIZE_Y ];

#endif
