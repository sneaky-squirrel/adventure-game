#include <stdio.h>
int health = 10;
char weapons[128];


void Wizard(){

printf("You have selected the Wizard.\n");
printf("Your health is %dHP\n", health);

}

void Elf(){

printf("You have selected the Elf.\n");
printf("Your health is %dHP\n", health);
}

void Knight(){

printf("You have selected the Knight.\n");
printf("Your health is %dHP\n", health);
}



int main(void) {
    
 char characterSelection;
    
    printf("Choose your character: %c\n", characterSelection);
    printf("A. Wizard\n");
    printf("B. Elf\n");
    printf("C. Knight\n");
    scanf(" %c", &characterSelection);

    if (characterSelection == 'A' || characterSelection == 'a'){
        Wizard();
       
    } 
    else if ( characterSelection == 'B' || characterSelection == 'b'){
         Elf ();
       
    }
    else if ( characterSelection == 'C' || characterSelection == 'c'){
        Knight ();
        
    }
    else {
        printf("Please only enter A, B or C\n");
    }
    
    return 0;
}



    