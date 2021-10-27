#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

/*
Input.c Options for Character in 
battle: (Attack, Heal, Run Away)

Ideas for battle monsters: answer Riddles correctly, use a pokemon battle style.  

*/
int heroHit = 10; //set the health value to 10;
int monsterHit = 10; //set the health value to 10;

int ExecuteOutcome (const char decision) {  
    int heroAttack, monsterAttack, heal;
    char choice;
    printf("This is your Current Health: %d\n", heroHit);
    printf("Monster's Health: %d\n\n", monsterHit);

    switch (decision) { 
    case 'a' : printf("Let's Battle!\n\n");
        heroAttack = (rand() % 10) + 1; //numbers from 1 to 4. 
        monsterAttack = (rand() % 10) + 1; 
        printf("Hero Attack is : %d\n", heroAttack); // Expand to more than one hero.   
        printf("Monster Attack is: %d\n", monsterAttack); // If we had time, we could attack more than one monster. 
 
        if (heroAttack > monsterAttack) { //If we had time, we could add multiple options to attack: missils, fireballs, bows, axes, swords, etc. 
            monsterHit = monsterHit - 1;
            printf("Attack successful, Monster took damage! Health: %d\n\n", monsterHit); //Add more damage based on the weapon. 
            if (monsterHit <= 0) {
                printf("You defeated the monster!!\n\n");
            }
        } 
        else if (heroAttack < monsterAttack) { // add more than one monster if we had time. 
            heroHit = heroHit - 1;
            printf("Attack failed, You took damage! Health: %d\n\n", heroHit);
        }
        else {
            printf("No damage has been inflicted!\n\n");
        }
        break;
    case 'h' : printf("You healed yourself!\n\n");  //add healing potions based on their strengths
        heroHit = heroHit + 15;
        printf("This is your Current Health: %d\n\n", heroHit);
        heroHit++;
        break;
    case 'r' : printf("You ran away from the monster safely!\n\n");
        //TODO: add a function call to run away. 
        break;  
    default:
        printf("You pressed an unknown option.\n\n");
    break;
    }
}
int main (void){
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