#include <stdio.h>
#include <stdbool.h>

/*
Input.c  ( Options for Character in 
battle: (Attack, Heal, Run Away) )
*/

int main (void) {

int attack, heal, currentHealth;
char choice;
//right down the pages 

heal = 10; //This is your base health. 
currentHealth = heal;

printf("--------------------------------------------------------------\n\n");
printf("----------------A wild monster appeared!----------------------\n\n");
printf("This is your Current Health: %d\n\n", currentHealth);
printf("Please enter an option:\n");
printf("1) Press 'a' to attack.\n");
printf("2) Press 'h' to heal.\n");
printf("3) Press 'r' to run away from the fight.\n");
printf("--------------------------------------------------------------\n");

scanf(" %c", &choice); //This is input for making your choice

switch (choice) { //used a switch statement from Chapter 3.11, Switch Statements of ZyBooks
    case 'a' : printf("You attacked the monster!\n");
    //need hitpoints and attack
    break;
    case 'h' : printf("You healed yourself!\n\n");
        //heal = 10;
        currentHealth = heal + 15;
        printf("This is your Current Health: %d\n", currentHealth);
        heal++;
        //printf("This is your Current Health: %d\n", currentHealth);
    break;
    case 'r' : printf("You ran away from the monster!\n");
    break;
default:
    printf("You pressed an unknown option.");
    break;
}
    return 0;
}