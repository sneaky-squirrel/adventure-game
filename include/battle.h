#ifndef BATTLE_H
#define BATTLE_H

typedef struct{ 
    int heroHit;
    int monsterHit;
    int gold; 
    int heroAttack;
    int monsterAttack;
    char choice;
    
} Battle;

int startBattle (void);
int ExecuteOutcome (const char decision);


#endif