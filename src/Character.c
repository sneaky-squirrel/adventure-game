#include <stdio.h>
#include <stdlib.h>
#include "../include/Character.h"
int health = 10; // every character starts off with a max health of 10 HP.


void Wizard(){
printf("You have selected the Wizard.\n");
printf("Your health is %dHP\n\n", health);
}

void Elf(){
printf("You have selected the Elf.\n");
printf("Your health is %dHP\n\n", health);
}

void Knight(){
printf("You have selected the Knight.\n");
printf("Your health is %dHP\n\n", health);
}



void ChooseCharacter() 

{
    
 char characterSelection;
    printf("\n");
    printf("---------------- SELECT YOUR CHARACTER! ----------------------\n\n");
    printf("A. Wizard\n");
    printf("B. Elf\n");
    printf("C. Knight\n");
    printf("or enter R for a Random Character\n");
    scanf(" %c", &characterSelection);

   switch( characterSelection)
{
	case 'W':
    case 'w':
		Wizard();
		break;
	case 'E':
    case 'e':
		Elf();
		break;
	case 'K':
    case 'k':
        Knight();
		break;
	case 'R':
         PickRandomClass();
    break;
    default:
        printf("Please only enter W, E, K, or R\n");
        break;

}

}

void PickRandomClass()
{

char className[ 256 ]; 
int randomValue; // allocating memory for the interger variable that will hold a random 
srand( 15 );
randomValue = rand() % 3;		// 0, 1, or 2
switch( randomValue )
{
	case 0:
		Wizard();
		break;
	case 1:
		Elf();
		break;
	case 2:
	default:
		Knight();
		break;
}
printf("The class that has been randomly selected is %s.\n", className);
}







    /* if (characterSelection == 'A' || characterSelection == 'a'){ //if the user input is A or a then execute Wizard function.
        Wizard();
    
    } 
    else if ( characterSelection == 'B' || characterSelection == 'b'){ // if the user input is B or b then execute Elf funcction.
         Elf ();
       
    }
    else if ( characterSelection == 'C' || characterSelection == 'c'){ // if the user input is C or c then execcute Knight function.
        Knight ();
        
    }
    else {
        printf("Please only enter A, B or C\n");
    } */