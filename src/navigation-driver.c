#include <stdio.h>
#include <assert.h>
#include "../include/world-navigation.h"

void SetPlayerPosition( const int x, const int y )
{
	current_player_position.x = x;
	current_player_position.y = y;
}

void printPlayerPosition()
{
	printf( "Current Position: ( %d, %d )\n",
		current_player_position.x,
		current_player_position.y );
}

void demoNavigation1()
{
	SetPlayerPosition( 50, 50 );
	MoveCharacter( world_NORTH );
	printPlayerPosition();
	assert( current_player_position.y == 49 );
	SetPlayerPosition( 50, 50 );
	MoveCharacter( world_SOUTH );
	printPlayerPosition();
	assert( current_player_position.y == 51 );
	SetPlayerPosition( 50, 50 );
	MoveCharacter( world_WEST );
	printPlayerPosition();
	assert( current_player_position.x == 49 );
	SetPlayerPosition( 50, 50 );
	MoveCharacter( world_EAST );
	printPlayerPosition();
	assert( current_player_position.x == 51 );
}

void demoNavigation2()
{
	SetPlayerPosition( 1024, 1024 );
	MoveCharacter( world_NORTH );
	printPlayerPosition();
	assert( current_player_position.y == 1023 );
	SetPlayerPosition( 1024, 1024 );
	MoveCharacter( world_SOUTH );
	printPlayerPosition();
	assert( current_player_position.y == 1024 );
	SetPlayerPosition( 1024, 1024 );
	MoveCharacter( world_WEST );
	printPlayerPosition();
	assert( current_player_position.x == 1023 );
	SetPlayerPosition( 1024, 1024 );
	MoveCharacter( world_EAST );
	printPlayerPosition();
	assert( current_player_position.x == 1024 );
}

void demoNavigation3()
{
	SetPlayerPosition( 0, 0 );
	MoveCharacter( world_NORTH );
	printPlayerPosition();
	assert( current_player_position.y == 0 );
	SetPlayerPosition( 0, 0 );
	MoveCharacter( world_SOUTH );
	printPlayerPosition();
	assert( current_player_position.y == 1 );
	SetPlayerPosition( 0, 0 );
	MoveCharacter( world_WEST );
	printPlayerPosition();
	assert( current_player_position.x == 0 );
	SetPlayerPosition( 0, 0 );
	MoveCharacter( world_EAST );
	printPlayerPosition();
	assert( current_player_position.x == 1 );
}

int main( int argc, const char* argv[] )
{
	printf( "Hello Adventure Game!\n" );
	demoNavigation1();
	demoNavigation2();
	demoNavigation3();
	return 0;
}
