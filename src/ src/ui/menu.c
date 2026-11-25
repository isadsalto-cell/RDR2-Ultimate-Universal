
#include <stdio.h>
#include "menu.h"
#include "../system/settings.h"

static void show_menu(void)
{
    printf("\n========== MAIN MENU ==========\n");
    printf("[1] Player Information\n");
    printf("[2] Cosmetic Information\n");
    printf("[3] Animation Information\n");
    printf("[4] Settings\n");
    printf("[5] About\n");
    printf("[0] Exit\n");
    printf("===============================\n");
    printf("Select: ");
}

void menu_init(void)
{
    printf("[SYSTEM] Menu initialized.\n");
}

void menu_run(void)
{
    int choice;

    while (1)
    {
        show_menu();

        if (scanf("%d", &choice) != 1)
        {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {}
            printf("Invalid input.\n");
            continue;
        }

        switch (choice)
        {
            case 1:
                printf("\nPlayer Information\n");
                printf("Game data: Not connected\n");
                break;

            case 2:
                printf("\nCosmetic Information\n");
                printf("Cosmetic options: Preview only\n");
                break;

            case 3:
                printf("\nAnimation Information\n");
                printf("Animation options: Preview only\n");
                break;

            case 4:
                settings_display();
                break;

            case 5:
                printf("\nRDR2 Ultimate Universal\n");
                printf("Version: 1.0.0\n");
                printf("Build: Development\n");
                break;

            case 0:
                printf("\nClosing menu...\n");
                return;

            default:
                printf("Invalid selection.\n");
                break;
        }
    }
}
