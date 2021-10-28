#ifndef BATTLE_H
#define BATTLE_H

typedef struct{
    //type the variables 
    int heroAttack;
    int monsterAttack;
    int gold; 
} Battle;

int ExecuteOutcome (const char decision);



#endif