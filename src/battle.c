#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
Input.c  ( Options for Character in 
battle: (Attack, Heal, Run Away) )
*/

int main (void) {

int heroAttack, monsterAttack, heal, heroHit, monsterHit, currentHealth;
char choice;
 
heal = 10; //This is your base health.
heroHit = 10; 
monsterHit = 10;


//currentHealth = heal;

printf("--------------------------------------------------------------\n\n");
printf("----------------A wild monster appeared!----------------------\n\n");
printf("This is your Current Health: %d\n", heroHit);
printf("Monster's Health: %d\n\n", monsterHit);
printf("Please enter an option:\n");
printf("1) Press 'a' to attack.\n");
printf("2) Press 'h' to heal.\n");
printf("3) Press 'r' to run away from the fight.\n");
printf("--------------------------------------------------------------\n");

//potential do while loop
//use helper functions

scanf(" %c", &choice); //This is input for making your choice

switch (choice) { //used a switch statement from Chapter 3.11, Switch Statements of ZyBooks
    case 'a' : printf("Let's Battle!\n\n"); //if programs read from files,
        //need hitpoints and attack
        //creating a random call for the attack (Chapter 2.19 Random Numbers). 

        heroAttack = (rand() % 4) + 1; //numbers from 1 to 4. 
        monsterAttack = (rand() % 4) + 1; 
        printf("Hero Attack is : %d\n", heroAttack); 
        printf("Monster Attack is: %d\n", monsterAttack); 

        //an if/else statement to determine the attack. 
        if (heroAttack > monsterAttack) {
            monsterHit = monsterHit - 1;
            printf("Attack successful, Monster took damage! Health: %d", monsterHit);
        } 
        else if (heroAttack < monsterAttack) {
            heroHit = heroHit - 1;
            printf("Attack failed, You took damage! Health: %d", heroHit);
        }
        else {
            printf("No damage has been inflicted!");
        }
    break;
    case 'h' : printf("You healed yourself!\n\n");
        heroHit = heroHit + 15;
        printf("This is your Current Health: %d\n", heroHit);
        heal++;
        //printf("This is your Current Health: %d\n", currentHealth);
    break;
    case 'r' : printf("You ran away from the monster!\n");
        //TODO: add a function call to run away. 
    break;
default:
    printf("You pressed an unknown option.");
    break;
}
    return 0;
}