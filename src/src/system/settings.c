
#include <stdio.h>
#include "settings.h"

static int overlay_enabled = 1;

void settings_init(void)
{
    overlay_enabled = 1;
    printf("[SYSTEM] Settings initialized.\n");
}

void settings_display(void)
{
    int choice;

    printf("\n========== SETTINGS ==========\n");
    printf("[1] Toggle Overlay\n");
    printf("[2] Show Overlay Status\n");
    printf("[0] Back\n");
    printf("Select: ");

    if (scanf("%d", &choice) != 1)
    {
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF) {}
        printf("Invalid input.\n");
        return;
    }

    switch (choice)
    {
        case 1:
            overlay_enabled = !overlay_enabled;
            printf("Overlay: %s\n",
                overlay_enabled ? "ON" : "OFF");
            break;

        case 2:
            printf("Overlay status: %s\n",
                overlay_enabled ? "ON" : "OFF");
            break;

        case 0:
            break;

        default:
            printf("Invalid selection.\n");
            break;
    }
}
