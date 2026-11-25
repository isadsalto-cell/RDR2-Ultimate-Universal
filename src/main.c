
#include <stdio.h>
#include "ui/menu.h"
#include "system/settings.h"

int main(void)
{
    printf("\n");
    printf("================================\n");
    printf("    RDR2 ULTIMATE UNIVERSAL\n");
    printf("================================\n");

    settings_init();
    menu_init();
    menu_run();

    return 0;
}
