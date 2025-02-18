#include <stdio.h>

// Define pi for calculating circle area
#define PI 3.14159

int main(void){
    int users_choice;
    double available_fence;

    // Prompt the user(the farmer) for the amount of fence they have in feet
    printf("How much fencing do you have (in feet)?: ");
    scanf("%lf", &available_fence);

    // Prompt the user for whether they want to build a circular (denoted by the number 1) or a square fence (denoted by the number 2)
    printf("Input (1) for a circular fence or (2) for a square fence: ");
    scanf("%d", &users_choice);

    // Area for a circle -> A = pi(r)^2 with r = half of available fencing
    // Area for a square -> A = a^2 with a representing one side of the enclosure

    if(users_choice == 1){
        double r = available_fence / 2;
        double circle_area = PI * (r * r);

        printf("The area of the circular enclosure is: %.2lf\n", circle_area);
    } else if (users_choice == 2){
        // 4 sides, so divide total available fencing by each side
        double side = available_fence / 4;
        double square_area = side * side;
        printf("The area of the square enclosure is: %.2lf\n", square_area);
    } else {
        printf("Error: Sorry, that is an invalid shape.\n");
    }

    return 0;
}