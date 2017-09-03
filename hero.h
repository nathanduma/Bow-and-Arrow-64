/* 
 * File:   hero.h
 * Author: Nathan Duma
 *
 */

#ifndef HERO_H
#define HERO_H

#include "vector.h"
#include "weapon.h"
#include "animation.h"
#include <malloc.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

enum heros{
    normal
};

typedef struct hero{
    enum heros type;
    bool hit;
    int quiverCount;
    vector *v;
    weapon **w;
    animation *alive;
    animation *dead;
    
    void (*playNextAnimation)(struct hero *self, display_context_t *disp, bool pressed);
    void (*move)(struct hero *self, enum direction d);
    void (*destructHero)(struct hero *self, int quiverMax);
} hero;

hero *initHero(enum heros h, int quiverMax);
void printMessage(const char *message, int x, int y, display_context_t *self);

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* HERO_H */

