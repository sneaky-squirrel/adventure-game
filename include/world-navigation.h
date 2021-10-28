#ifndef WORLD_NAVIGATION_H
#define WORLD_NAVIGATION_H

typedef enum
{
	world_INVALID,
	world_NORTH,
	world_SOUTH,
	world_WEST,
	world_EAST
} Direction;

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

int MoveCharacter( const Direction dir );

void PrintEdgeOfWorld();

extern Point current_player_position;

extern Location game_world[ MAX_SIZE_X ][ MAX_SIZE_Y ];

#endif
