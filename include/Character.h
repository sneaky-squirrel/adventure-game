#ifndef CHARACTER_H
#define CHARACTER_H

typedef struct {
    int health;
    char weapons;
} Character;

void Wizard();
void Elf();
void Knight();
int ChooseCharacter(void);


#endif 
