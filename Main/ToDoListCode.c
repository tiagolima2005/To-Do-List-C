#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define max_tasks 100 // maximum 100 tasks
#define task_length 255 // a task can have 255 characters maximum
#define tasks_savefile "ToDoList.txt" // tasks will save as ToDoList.txt

int Answer; // used to read the first input aka 1-6
int total_tasks = 0; // total tasks
char tasks[max_tasks][task_length]; 

int main()
{
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
            add_task();
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

void add_task(){
    if (total_tasks >= max_tasks){ //before adding a task it checks if it can or cannot add (if it reached the limit or not)
        printf("Maximum number of tasks reached!\n");
        return;
    }

    printf("Insert the task you want to add:");
    fgets(tasks[max_tasks], task_length, stdin); //reads the new task and adds it to max_tasks while checking its length to make sure it doesnt go over the limit
    tasks[total_tasks][strcspn(tasks[max_tasks], "\n")] = 0; 
    total_tasks++;
}