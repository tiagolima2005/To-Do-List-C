#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define max_tasks 100                 // maximum 100 tasks
#define task_length 255               // a task can have 255 characters maximum
#define tasks_savefile "ToDoList.txt" // tasks will save as ToDoList.txt

int Answer;          // used to read the first input aka 1-6
int total_tasks = 0; // total tasks
char tasks[max_tasks][task_length];

void add_task();
void remove_task();
void show_tasks();

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
        getchar(); // cleans buffer so that fgets can work properly

        switch (Answer)
        {
        case 1:
            add_task();
            break;

        case 2:
            remove_task();
            break;

        case 3:
            /* code */
            break;

        case 4:
            show_tasks();
            break;

        case 5:
            /* code */
            break;

        case 6:
            printf("Exiting the program...");
            break;

        default:
            printf("Invalid Option\n");
        }

    } while (Answer != 6);

    return 0;
}

void add_task()
{
    if (total_tasks >= max_tasks) // before adding a task it checks if it can or cannot add (if it reached the limit or not)
    {
        printf("Maximum number of tasks reached!\n");
        return;
    }

    printf("Insert the task you want to add:\n");
    fgets(tasks[total_tasks], task_length, stdin);             // reads the new task and adds it to total_tasks
    tasks[total_tasks][strcspn(tasks[total_tasks], "\n")] = 0; // removes the new line at the end of the string
    total_tasks++;
    printf("Task added successfully!\n");
}

void show_tasks()
{
    printf("Your tasks:\n");              // header for the tasks list
    for (int i = 0; i < total_tasks; i++) // loop to go through all tasks
    {
        printf("%d - %s\n", i + 1, tasks[i]); // prints the task number and its content
    }
}

void remove_task()
{
    show_tasks();    // shows tasks so we can choose which one to remove
    int task_number; // variable for the number of the task who will be removed
    printf("Enter the number of the task you want to remove:\n");
    scanf("%d", &task_number); // reads the number
    getchar();                 // cleans buffer

    if (task_number < 1 || task_number > total_tasks) // if statement to check if the number is valid
    {
        printf("Invalid Number...\n");
        return;
    }

    for (int i = task_number - 1; i < total_tasks - 1; i++) // moves all tasks one position up ex: 2 to 1
    {
        strcpy(tasks[i], tasks[i + 1]); // copies the task in i + 1 position to i position
    }
    total_tasks--; // decrease the value of total tasks
}