#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void artithmetic_game();
void guessing_game();
void print_score();

int main(void)
{
    int game_choice;

    do
    {
        // Ask the user which game they want to play
        printf("Please make a selection from the following:\n1. Play Arithmetic Game.\n2. Play Guessing Game.\n3. Print Score.\n4. Quit.\n");
        scanf("%d", &game_choice);

        switch (game_choice)
        {
        case 1:
            artithmetic_game();
            break;
        case 2:
            guessing_game();
            break;
        case 3:
            print_score();
            break;
        case 4:
            return 0;
            break;
        default:
            printf("Invalid input. Please enter 1-4.\n");
            break;
        }
    } while (1);

    return 0;
}

void artithmetic_game()
{
    int game_type, max_number, max_problems;

    // if user chooses 1 (arithmetic), prompt with menu choices of add or multi
    printf("Would you like, 1)Addition or 2)Multiplication?: ");
    scanf("%d", &game_type);

    // prompt for maximum number to be used
    printf("What is the maximum number you would like?: ");
    scanf("%d", &max_number);
    
    // Generate a random number between 1 and max_number

    
    // prompt for desired number of problems
    printf("How many problems do you want?: ");
    scanf("%d", &max_problems);


    return;
}

void guessing_game()
{
    printf("Guessing game\n");
}

void print_score()
{
    printf("Print score\n");
}