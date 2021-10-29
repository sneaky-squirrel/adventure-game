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

void StartBattle ();
int ExecuteOutcome (const char decision);

#endif
