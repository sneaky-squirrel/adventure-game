#include "../include/world-navigation.h"
#include <stdio.h>

Point current_player_position = { 0, 0 };
Location world_map[ MAX_SIZE_X ][ MAX_SIZE_Y ];

int MoveCharacter( world::Direction dir )
{
	switch( dir )
	{
		case world::NORTH:
			if( current_player_position.y <= 0 )
			{
				PrintEdgeOfWorld();
				return -1;
			}
			--current_player_position.y;
			break;
		case world::SOUTH:
			if( current_player_position.y >= MAX_SIZE_Y - 1 )
			{ PrintEdgeOfWorld();
				return -1;
			}
			++current_player_position.y;
			break;  
		case world::WEST:
			if( current_player_position.x <= 0 )
			{
				PrintEdgeOfWorld();
				return -1;
			}
			--current_player_position.x;
			break;  
		case world::EAST:
			if( current_player_position.x >= MAX_SIZE_X - 1 )
			{
				PrintEdgeOfWorld();
				return -1;
			}
			++current_player_position.x;
			break;  
	}
	return 0;
}

void PrintEdgeOfWorld()
{
	printf( "You cannot move any further in this direction, you are at the edge of the world.\n" );
}
