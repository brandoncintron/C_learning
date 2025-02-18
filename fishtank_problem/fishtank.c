#include <stdio.h>

#define GLASS_COST 0.02

int main(void){
    // Prompt the user for the length, width and height (inches)
    int l, w, h;

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

    printf("Your goldfish tank costs $%.2lf to build.\n", tank_cost);
    
    return 0;
}