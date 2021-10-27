//Git add -A : add all files to current directory
//git status: know if files are commited yet, if red changes are not made
//git commit -m "update"
//git status: colors of file should be green
//git push origin <branch name>
//git branch -d <branch name> : deletes branch
//git checkout -b <new branch name>: avoid merge conflicts
#include <stdlib.h>
#include <stdio.h>
int main (void){
    char yes, weapon, potion, character, quit; //I moved the variables up top.
    char name[10];
    //Start up introduction to game
    printf("Welcome to <Insert Game Title>\n");
    //pressing Y key to continue dialogue
    printf("Press Y to continue ");
    scanf(" %c", &yes); //This is Char, you need " %c" with a space in front.
    if (yes == 'y'){
      //Narrator introducing the player
  printf("Greetings adventurer are you ready for your quest?\n");
  printf("Press Y to continue ");
  scanf(" %c", &yes);
  printf("\n");
    }
    
     printf("Let us Begin Our Journey!\n");
      printf("Press Y to continue ");
  scanf(" %c", &yes);
  printf("\n");
  printf("Hello traveler I am Berholdt the Warrior I am a well known hermit of the great Herrold Kingdom, I specialize in weaponary and elixirs. I was told by King Herrold that you come to visit me on helping you on your quest. Would you please give me your title?\n");
  printf("Please enter your traveler name: ");
  scanf("%s", name);
   printf("\n");
   printf("Greetings %s. It is a pleasure to meet you. As you are aware the King Herrold informed us their is a threat among our village. The evil goblin king Gandar has made an army of orcs to prepare to invade our great kingdom. He is slowly getting ready to fight so we must act quickly. You will face the wittiest of enemies so you must prepare. Luckily I have the tools you need to fight. Are you ready to make you weapon selection?\n", name);
    printf("Press Y to continue ");
  scanf(" %c", &yes);
  printf("\n");
  printf("Splendid! Let us begin with your weopon. Your first choice is the Elvin sword, a great blade that provides strong damage but slow reaction time. Our second choice is the Sparrows Bow, a bow and arror equipped with fiery arrows that is minimal in damage but quick and effective. And lastly is our Kings Guantlet. These steel gloves are perfect for hand to hand combat that are both heavy in damage and quick and effective, however you will be face to face in enemy combat which means you are more vulnerable in damage. Now make your choice\n");
  printf("Select your Weapon\n");
  printf("A for the Elvin Sword\n");
  printf("B for the Sparrow Bow\n");
  printf("C for the King's Guantlet\n\n");
  //char weapon;
  //switch statement for player to select their weaopon of choice
  scanf(" %c", &weapon);
  switch(weapon){
      case 'A':
      printf("You have chosen the Elvin blade. Let's move to potions");
      break;
      case 'B':
      printf("You have chosen the Sparrow bow. Let's move to potions");
      break;
      case 'C':
      printf("You have chosen the King's Gauntlet. Let's move to potions");
      break;
  }
  printf("Excellent! Not that you have chosen your weapon, it is time for potions.\n");
  printf("Press Y to continue ");
  scanf(" %c", &yes);
  printf("\n");
  printf("For potions there are three choices:\n");
  printf("Our primary choice is health potion, you can use this elixir to restore health when needed, reusable every damage a made onto an enemy\n");
  printf("Our secondary choice is the damage increase potion, basically increases damage points on attacks on enemies, reusable after 2 enemies are defeated.\n");
  printf("And finally there is the invincible potion, which ceases damage upon you from an enemy for 3 hits, reusable after 3 enemies are defeated.\n");
  printf("Select your potion:\n");
  printf("A for the health potion\n");
  printf("B for the damage potion\n");
  printf("C for the invincible potion\n\n");
  //char potion;
  //Another switch statement for player to select their potion of choice
  scanf(" %c", &potion);
  switch(potion){
      case 'A':
      printf("You have chosen the health potion\n");
      break;
      case 'B':
      printf("You have chosen the damaga potion\n");
      break;
      case 'C':
      printf("You have chosen the invincible potion\n");
      break;
  }
  printf("Splendid! You are know prepare for your adventure. Now you will head through the Forest of Despair, where horrors await. Then up the Rigid Mountains. And finally make your way to the cave where Gandar's lair where you shall slay him and his army will surrender.\n\n");
  printf("This is a dangerous quest, you may not return alive but our will reward you greatly. Are you ready for the challenge?\n");
   //Select Y key to start game
   printf("Press Y to continue\n ");

  scanf(" %c", &yes);
  printf("\n");
  printf("Then off to the forest you go!");
  //ending dialogue
  printf("Congratulations fellow traveler you have defeated the evil Geldar and have saved the entire kingdom of Herrold. You will be knighted as his servant and will be remembered by the townspeople as their hero.\n");
  printf("Press q to quit game\n");
  scanf(" %c", &quit);
return 0;
}