#ifndef WORLD-NAVIGATION_H
#define WORLD-NAVIGATION_H

extern const int MAX_SIZE_X;
extern const int MAX_SIZE_Y;

typedef struct
{
	int x;
	int y;
} Point;

typedef struct
{
	;
} Location;

Point current_player_position;

Location game_world[ MAX_SIZE_X, MAX_SIZE_Y ];

#endif
