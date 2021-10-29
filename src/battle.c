#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
//#include "../include/battle.h"

//#include "world-navigation.h"

/*
Input.c Options for Character in 
battle: (Attack, Heal, Run Away)

Ideas for battle monsters: answer Riddles correctly, use a pokemon battle style. 
If we had more time:
-Maybe find a way to increase the difficulty of the battle and/or a boss battle simulation
-Weapon's effectiveness towards the type of monster (Ex: Goblins are weak to fire, Cyclops are weak to Lightning). 
-continue with a saved file.
*/

int heroHit = 10; //set the health value to 10;
int monsterHit = 5; //set the health value to 10;

int gold = 1; //set gold to 5.   
int heroAttack, monsterAttack;
char choice;

int ExecuteOutcome (const char decision) {  //in the future, I want to add other choices: capture a monster,   
    //int heroAttack, monsterAttack;
    //char choice;
    printf("This is your Current Health: %d HP\n", heroHit);
    printf("Monster's Health: %d HP\n", monsterHit);
    printf("Gold: %d\n\n", gold);

    switch (decision) { 
    case 'a' : printf("Let's Battle!\n\n");
        heroAttack = (rand() % 10) + 1; //numbers from 1 to 4. 
        monsterAttack = (rand() % 10) + 1; 
        printf("Hero Attack is : %d Damage\n", heroAttack); // Expand to more than one hero.   
        printf("Monster Attack is: %d Damage\n\n", monsterAttack); // If we had time, we could attack more than one monster. 
 
        if (heroAttack > monsterAttack) { //If we had time, we could add multiple options to attack: missils, fireballs, bows, axes, swords, etc. 
            monsterHit = monsterHit - 1;
            gold = gold + 5;
            gold ++;
            printf("Attack Successful, Monster took Damage! Monster's Health: %d HP\n", monsterHit); //Add more damage based on the weapon.
            printf("You have earned 5 gold.\n\n");
            if (monsterHit <= 0) {
                printf("You defeated the monster!!\n\n"); //If we had more time, I would find a way to exit the loop when the monster's health reaches to 0. 

            }
        } 
        else if (heroAttack < monsterAttack) { // add more than one monster if we had time. 
            heroHit = heroHit - 1;
            gold = gold + 1;
            printf("Attack failed, You took damage! Health: %d HP\n\n", heroHit);
            printf("You have earned 1 gold.\n\n");
        }
        else {
            printf("No damage has been inflicted!\n");
        } 
        break;
    case 'h' : printf("You healed yourself!\n\n");  //add healing potions based on their strengths
        heroHit = heroHit + 15;
        printf("This is your Current Health: %d HP\n\n", heroHit);
        heroHit++;
        break;
    case 'r' : printf("You ran away from the monster safely!\n\n GAME OVER, thank you for playing!\n\n");
        //TODO: add a function call to run away. 
        break;  
    default:
        printf("You pressed an unknown option.\n\n");
    break;
    }
    return 0;
}

int StartBattle (void){

    char choice;
    int seedVal; //we are supposed to seed once. 
    srand(seedVal);
    do {
        printf("----------------A Wild Monster appeared!----------------------\n\n");
        printf("Please enter an option:\n");
        printf("1) Press 'a' to attack.\n");
        printf("2) Press 'h' to heal.\n");
        printf("3) Press 'r' to run away from the fight.\n");
        printf("--------------------------------------------------------------\n");
        scanf(" %c", &choice); //This is input for making your choice
        ExecuteOutcome(choice);
    } while (choice != 'r'); //Making sure that the choice is not R. 
        //potential do while loop
        //use helper functions
    return 0;
}
