#include <stdio.h>
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



int main(void) {
    
 char characterSelection;
    printf("\n");
    printf("---------------- SELECT YOUR CHARACTER! ---------------------- %c\n\n", characterSelection);
    printf("A. Wizard\n");
    printf("B. Elf\n");
    printf("C. Knight\n");
    scanf(" %c", &characterSelection);

    if (characterSelection == 'A' || characterSelection == 'a'){ //if the user input is A or a then execute Wizard function.
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
    }

    return 0;
}



    