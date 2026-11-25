RDR2-Ultimate-Universal/
│
├── README.md
├── LICENSE
├── .gitignore
│
├── docs/
│   ├── overview.md
│   └── compatibility.md
│
├── src/
│   ├── main.c
│   │
│   ├── ui/
│   │   ├── menu.c
│   │   └── menu.h
│   │
│   ├── input/
│   │   ├── controller.c
│   │   └── controller.h
│   │
│   └── system/
│       ├── settings.c
│       └── settings.h
│
├── assets/
│   └── icons/
│
└── tests/
    └── test_ui.c
#include <stdio.h>
#include "ui/menu.h"
#include "system/settings.h"

int main(void)
{
    printf("RDR2 ULTIMATE UNIVERSAL\n");

    menu_init();
    settings_init();
    menu_display();

    return 0;
}
#ifndef MENU_H
#define MENU_H

void menu_init(void);
void menu_display(void);

#endif
#include <stdio.h>
#include "menu.h"

void menu_init(void)
{
    printf("Menu initialized\n");
}

void menu_display(void)
{
    printf("[1] Player\n");
    printf("[2] Weapons\n");
    printf("[3] Animations\n");
    printf("[4] Settings\n");
    printf("[5] About\n");
}
#ifndef SETTINGS_H
#define SETTINGS_H

void settings_init(void);

#endif
#include <stdio.h>
#include "settings.h"

void settings_init(void)
{
    printf("Settings initialized\n");
}