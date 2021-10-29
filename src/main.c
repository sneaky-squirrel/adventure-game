#include <stdio.h>
#include <stdlib.h>


//#include "../include/battle.h"
//#include "../include/dialogue.h"

#include "battle.h"
#include "dialogue.h"
#include "Character.h"

int main( int argc, const char* argv[] )
{
	StartIntro();
	ChooseCharacter();
	StartBattle(); 
	return 0;
}

