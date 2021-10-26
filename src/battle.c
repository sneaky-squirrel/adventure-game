#include <stdio.h>
#include <stdbool.h>

/*
Input.c  ( Options for Character in 
battle: (Attack, Heal, Run Away) )
*/

int main (void) {

int mainCharacter;
char choice, attack, heal, runAway;
//right down the 
printf("--------------------------------------------------------------\n\n");
printf("----------------A wild monster appeared!----------------------\n\n");
printf("Please enter an option:\n");
printf("Press 'a' to attack.\n");
printf("Press 'h' to heal.\n");
printf("Press 'r' to run away from the fight.\n");
printf("--------------------------------------------------------------\n");

scanf(" %c", &choice);

switch (choice) {
    case 'a' : printf("You attacked the monster!\n");
    break;
    case 'h' : printf("You healed yourself!\n");
    break;
    case 'r' : printf("You ran away from the monster!\n");
    break;
default:
    printf("You pressed an unknown option.");
    break;
}
    return 0;
}