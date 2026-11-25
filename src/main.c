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