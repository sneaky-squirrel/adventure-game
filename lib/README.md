This README.md file contains all of our notes, ideas, and plans for building the project. 

https://github.com/sneaky-squirrel/adventure-game

Brainstorm
Ideas that can potentially be added to the project.  Feel free to add any wild suggestions here to bounce ideas with everyone.
Game Title: Guardians of Herrold
e.g  Elemental Weakness for enemy characters.

Elemental Weakness for enemy characters.(stretch goal)
Alternative options to resolve an encounter (besides combat).
 (stretch goal)
Health :(numerical value), interaction with them. (MVP)
Add options to move (MVP)
Game should be interactive (MVP)
Equippable Gear (stretch goal)
Loot / Drops. (stretch goal)
Gold. (MVP)
Custom Actions
Travel ( NSWE ), Observe (What is contained within the current location or “directory” ), Consider ‘X’ ( list actions that may be performed on ‘X’, e.g. “Attack” a monster, “Rummage” through a chest, “Pick-Up” a book, “Equip” a sword ).
Likely implemented through an input parser reading a custom syntax.
e.g. “Attack Goblin-a” == Search for “Goblin-a”, and execute an “Attack” on it.  Character might swing his sword to damage the goblin.
Be able to switch weapons. (stretch goal) 
Dialogue (“Monster Defeated”, “You cleared the level”, “Your Health is Low”, “Game Over” (MVP)
Add Monster Names (MVP)
Mini Boss Level (stretch goal)

Currently Working On:
	e.g.  [DeveloperName] is working on [Feature]

Minimum Viable Product
Minimal subset of features to prioritize to have a complete product.  Should not include
any unnecessary features.

Single Character (Hero)
Single Level / World (No Levels yet)
Statistics Set:  Hitpoints and Attack
Basic over-world Navigation (North, South, West, East )
Options for Character in battle: (Attack, Run Away, Heal).
1 Monster: Goblin.
1 Weapon: Sword.
Add another level or map

Who is going to do what?
Project management: 
Do not mess up each others code. 
Scrub master can only add code to the main




Potential Files:
	main.c
	Monster.c
	Overworld-navigation.c
	Battle.c
	

Pseudo-Code Section:
Add any pseudo-code you feel comfortable sharing with the team while drafting / iterating on your code.  Feel free to work privately in your IDE instead.  Make an effort to backup your pseudo-code on a separate document, and also try to not remove code here written by other people.

<name> | <feature>
Diego | overworld-navigation

Description:  Represent the world as a 2D collection of Points, each Point corresponding to a Location.  Each Location potentially contains many different kinds of objects or structures (TBD).

// Is this legal syntax?  Might have to replace with #define
const int MAX_SIZE_X = 1024;
const int MAX_SIZE_Y = 1024;

typedef struct
{
    int x;
    int y;
} Point;

/*
Represents a “Room” or “Location” in the game world.  e.g. Room at Point ( 15,60 ) might contain a Goblin (List of Characters), a treasure chest (List of Containers), a dropped dagger (Item on the floor).  Feels like this structure would easily become coupled with many files of code, which will likely be problematic.
*/
typedef struct
{
/*
    Empty entries must be initialized to NULL.  Always check that an entry is not NULL before dereferencing.
    work-in-progress
*/
    Character* character_list[ MAX_CHARACTERS_PER_LOCATION ];
} Location;

Location game_world[ MAX_SIZE_X ][ MAX_SIZE_Y ];


//  Toy Code, attempt at a very flexible program.
/*
Flexible “Game Object” that can represent any individual “thing” that exists within the physical world “simulation”.  Objects can range from items like a “sword” to individual characters that can hold an inventory of items like a “Goblin” or a “Treasure Chest”.
*/

#define MAX_STATISTIC_NAME_LENGTH = 32;

namespace rpg
{
typedef struct
{
	char name[ MAX_STATISTIC_NAME_LENGTH ];
	int value;
} Statistic;
}
//  rpg::Statistic Hitpoints.value = 10; rpg::Statistic Attack.value = 5;

typedef struct
{
	int id;				// Uniquely identifies a Game Object, kept track of by a static variable.
	Point world_position;		// Keeps track of where in the world the object is located at.

// Holds variable-length list of Statistic items that are allocated on the heap (Effectively string:int pairs).
// Allows for the 
// work-in-progress
rpg::Statistic* stat_list;
} GameObject;

Draft to attack being successful (still in progress): 
#include <stdio.h>
#include <stdbool.h>
 
int main () {
    char mc;
    char goblin;
    int i, health, money, attack;
    bool successAttack;
 
    health = 10;//start at a health of 10
    attack = health - 2;
    //possibility of working on the battle
    for (i = 0; i <= health; ++i){
        if (successAttack = true) {
         //fill in the ideas  
        }
    }
    //FIX ME: still in progress
    return 0;
}

Files to Delegate: 

.c / .h

//
Combatant.c

// Reading  input from the terminal
Input.c  ( Options for Character in battle: (Attack, Run Away, Heal) )

// Purely output
Dialogue
Dialogue (“Monster Defeated”, “You cleared the level”, “Your Health is Low”, 

world

Navigation ( Basic over-world Navigation (North, South, West, East ) )

 - Include a brief demo of playing your game
 - Describe your major design decisions and guiding philosophy
 - Show the most interesting sections of your code
 - Discuss any surprises or lessons learned
 - What were your approaches to decision-making, scheduling, teamwork, testing, and any other "management" issues
 - In Slack, provide me with a link to your repository.  If the version you're presenting isn't the newest one, indicate which version it is.


Major Design Decisions and guiding philosophy
	A trivial initial product, and expand later.
	Philosophy was determined by the limited deadline.

Most Interesting Sections of your Code
	Pending

Surprises or Lessons Learned:
 Took time initially to learn how to use Git properly and share our contributions in a common remote repository.
Configuring VSCode (Visual Studio Code) to detect the directory containing the header files.
Decided to download and use the ‘make’ program instead to compile the executable file in our Windows, MacOS, and Linux machines instead.
The IDE functions and behaves similarly, but...
	
What were your approaches to decision-making, scheduling, teamwork, testing, and any other “management” issues?
Decision Making:
Begin by having all team members add ideas and suggestions for project scope, expandable features and workflow.
Put ideas and suggestions to a vote to make decisions.
Train all team members to be able to use git, their IDE, and compile their code before starting to write their code so that they can all contribute to the project as early as possible.















#include <stdlib.h>
#include <string.h>

do
{
char userInput;
scanf( “ %c”, &userInput );
switch( userInput )
{
	case ‘A’:
	case ‘a’:

		warrior();
		Break;
	case ‘b’:
		wizard();
		Break;
	case ‘c’:
		bob();
		Break;
	case ‘r’:
		pickRandomClass();
	default:
}
}
while( userInput != ‘w’ && userInput != ‘W’ &&
userInput != ‘e’ && userInput != ‘E’ &&
userInput != ‘k’ && userInput != ‘K’ &&
userInput != ‘r’ && userInput != ‘R’ );

------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------


void pickRandomClass();

char className[ 256 ];
int randomValue;
srand( 15 );
randomValue = rand() % 3;		// 0, 1, or 2
switch( randomValue )
{
	case 0:
		//strcpy( className, “Warrior” );
		warrior();
		break;
	case 1:
		wizard();
		break;
	case 2:
	default:
		bob();
		break;
}
printf( “The class that has been randomly selected is %s.\n”, className );
