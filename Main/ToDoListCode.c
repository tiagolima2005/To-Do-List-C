#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

    int Answer;

    do
    {
        printf("\nWelcome to your To do List App\n");
        printf("Type '1' to Add a task\n");
        printf("Type '2' to Remove a task\n");
        printf("Type '3' to Edit a task\n");
        printf("Type '4' to Show all your tasks\n");
        printf("Type '5' to Mark a task as completed\n");
        printf("Type '6' to Exit the program\n");
        scanf("%d", &Answer);

        switch (Answer)
        {
        case 1:
            /* code */
            break;

        case 2:
            /* code */
            break;

        case 3:
            /* code */
            break;

        case 4:
            printf("Closing...");
            break;

        case 5:
            /* code */
            break;

        case 6:
            /* code */
            break;

        default:
            printf("Invalid Option\n");
        }

    } while (Answer != 4);

    return 0;
}