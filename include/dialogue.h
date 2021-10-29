#ifndef DIALOGUE_H
#define DIALOGUE_H

typedef struct {
    char yes, weapon, potion, character, quit;
    char name [10];
} dialogue;

void startIntro ();

#endif