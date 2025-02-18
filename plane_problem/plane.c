#include <stdio.h>
#include <math.h>

int main(void){
    /*  Given the locations of two planes, you have to decide whether or not the two planes are too close for safe flying.
        If two planes are less than a distance of 100 units apart, they are too close to be flying safely.
    */

    int x, y, x1, y1;
    // 1. Find the x & y coordinates of each plane (real numbers between -1000 & 1000, inclusive)
    printf("Enter the x and y coordinates of the first plane (separated by a space): ");
    scanf("%d %d", &x, &y);

    printf("Enter the x and y coordinates of the second plane (separated by a space): ");
    scanf("%d %d", &x1, &y1);

    // 2. Compare the coordinates of each plane using distance formula, include math header
    int distance = sqrt(pow((x1 - x), 2) + pow((y1 - y), 2));

    if(distance < 100){
        printf("The two planes are too close to be safe.\n");
    } else{
        printf("The two planes are safe.\n");
    }

    return 0;
}