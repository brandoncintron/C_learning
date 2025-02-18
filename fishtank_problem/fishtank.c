#include <stdio.h>

#define GLASS_COST 0.02
#define MAINTENANCE_COST 0.005
#define FISH_PRICE 5.00
#define FISH_SPACE_NEEDED 250


int main(void){
    
    int l, w, h, selection;

    // Part E - Allow the user to input multiple cases, or press 0 to exit the program
    do{
        printf("Would you like to enter data to calculate your fish tank profit? (1=Yes, 0=No): ");
        scanf("%d", &selection);

        // If the user enters 0, exit the program right here
        if(selection == 0){
            printf("\nThank you for using the fish tank program, goodbye!\n");
            break;
        }

        // Else, prompt the user for the length, width and height (in inches)
        // Part A - Building a Goldfish Tank
        printf("What is the length of your goldfish tank (in inches)?: ");
        scanf("%d", &l); 
        printf("What is the width of your goldfish tank (in inches)?: ");
        scanf("%d", &w);
        printf("What is the height of your goldfish tank (in inches)?: ");
        scanf("%d", &h);

       /* Calculate the cost of building the tank:
       1. Find the total surface area of the inputs
            The fish tank won't have a top (open cuboid), so area = 1lw + 2(lh + wh)
            Where lw = base, lh = 2 long sides, wh = 2 smaller sides
       */
       double surface_area = (l * w) + 2 * (l * h + w * h);

       // 2. Mulitply surface area by glass cost to find total fishtank cost
       double tank_cost = GLASS_COST * surface_area;

       //printf("\nYour goldfish tank costs $%.2lf to build.\n", tank_cost);
       
       /* Part B - Maintaining the Tank
       Find the maintenance cost of the tank by multiplying volume by the maintenance cost of 0.005/in^2 */

       double volume = (l * w * h);
       double maintenance_cost =  volume * MAINTENANCE_COST;

       //printf("Your goldfish tank costs $%.2lf to maintain.\n", maintenance_cost);

       /* Part C - Determining the Profit of the Goldfish Tank
       Determine the amount of profit you can gain by selling the fish in the tank.
       Each goldfish in the tank requires 250 cubic inches of room in the tank to survive.
       Assume that you sell each goldfish for $5.00.
       */

       // Find the invested tank expenses to subtract from fish revenue later to find profit
       double tank_expenses = tank_cost + maintenance_cost;

       // Since each goldfish needs 250ci of space, divide total volume by 250
       int maximum_fish = volume / FISH_SPACE_NEEDED;

       // Each fish is $5, multiply maximum fish by their sell price
       double fish_revenue = maximum_fish * FISH_PRICE;

       // Factor in the expenses to calculate profit.
       double profit = fish_revenue - tank_expenses;

       printf("\nYour goldfish tank costs $%.2lf to build, and $%.2lf to maintain.\n", tank_cost, maintenance_cost);
       // printf("Your profit from selling %d goldfish is $%.2lf.\n", maximum_fish, profit);

       /* Part D - Fishtank that might lose money
       In part C, we were guaranteed that there would be a positive profit. Adjust the program to allow for cases where the user either breaks even or loses money. */
       if(profit == 0){
           printf("You have broken even from selling goldfish.\n");
       } else if (profit < 0){
           printf("Your loss from selling goldfish is $%.2lf.\n", profit);
       } else {
           printf("Your profit from selling %d goldfish is $%.2lf.\n", maximum_fish, profit);
       }
       printf("------------------\n");

    } while (selection != 0);
    
    /* Part E - Fishtank w/repetition
    Edit your program from part A above to allow the user to try multiple cases. 
    Before each case, ask the user if they would like to enter new data or quit.
    If they want to enter new data, allow them to do so and simply output the profit/loss for that case. 
    If they want to quit, the program should terminate. 
    */

    // I'll wrap the program in a do-while loop, and break if the user enters 0.

    return 0;
}