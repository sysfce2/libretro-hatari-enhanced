#ifndef VKBD_H
#define VKBD_H

#include "graph.h"

extern bool vkbd_active;
extern bool retro_capslock;
extern signed char vkbd_ready;

extern void print_vkbd(void);
extern void input_vkbd(void);
extern void toggle_vkbd(void);

extern unsigned int opt_vkbd_theme;
extern unsigned int opt_vkbd_alpha;

extern int vkflag[10];

#define VKBDX 11
#define VKBDY 8

/* Special key values */
#define VKBD_PAGE2    -2
#define VKBD_HIDE     -3
#define VKBD_STAT     -4
#define VKBD_COLOR    -5

#endif /* VKBD_H */
