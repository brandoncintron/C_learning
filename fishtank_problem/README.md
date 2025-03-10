# Fishtank - Practice Problem

*DISCLAIMER: This practice problem was referenced from a University of Central Florida professors' public practice resources. __I do not take any credit for creating this problem, nor can I guarantee my program is the most efficient.__*

## Problem A: Building a Goldfish Tank
You want to build a goldfish tank and determine how much it will cost. Each tank has three dimensions: length, width and height. The cost of building the tank is simply the cost of the five panes of glass that comprise the tank. (The top of the tank is not enclosed by glass.) Glass costs exactly $0.02 for one square inch. Define a constant to store this value in your program. Your program should prompt the user for the length, width and height of the tank in inches. Then your program should calculate the cost of building the tank and output that to the screen.

## Problem B: Maintaining the Tank
In order to actually use the goldfish tank you have built, you must maintain it. The cost of maintaining the tank is the volume of the tank multiplied by $0.005, (half of a penny). Write a program to read in the length, width and height of the tank and output the cost of maintaining the tank. 

## Problem C: Determining the Profit of the Goldfish Tank
Using the solutions to problems A and B, determine the amount of profit you can gain by selling the fish in the tank.

## Problem D: Fishtank that might lose money
In problem C, you calculated the user's profit for selling their goldfish. In that problem you were guaranteed that there would always be a positive profit. Adjust your program to allow for cases where the user either breaks even or loses money.

## Problem E: Fishtank w/repetition
Edit the program from problem A to allow the user to try multiple scenarios. Before each case, ask the user if they would like to enter new data or quit. If they want to enter new data, allow them to do so and simply output the profit/loss for that case. If they want to quit, the program should terminate.

## Input Specification
1. The length, width and height of the tank will be positive integers.

## Output Specification
Output everything to two decimal places.

## Example Usage

```
Example 1:
Would you like to calculate your fish tank profit(1=Yes, 0=No)? 1
What is the length of your goldfish tank (in inches)?: 24
What is the width of your goldfish tank (in inches)?: 12
What is the height of your goldfish tank (in inches)?: 16

Your goldfish tank costs $28.80 to build, and $23.04 to maintain.
Your profit from selling 18 goldfish is $38.16.
------------------
Would you like to calculate your fish tank profit(1=Yes, 0=No)? 1
What is the length of your goldfish tank (in inches)?: 6
What is the width of your goldfish tank (in inches)?: 6
What is the height of your goldfish tank (in inches)?: 6

Your goldfish tank costs $3.60 to build, and $1.08 to maintain.
Your loss from selling goldfish is $-4.68.
------------------
Would you like to calculate your fish tank profit(1=Yes, 0=No)? 0
Thank you for using the fish tank program, goodbye!
```
