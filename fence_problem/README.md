# Fence - Practice Problem

*DISCLAIMER: This practice problem was referenced from a University of Central Florida professors' public practice resources. __I do not take any credit for creating this problem, nor can I guarantee my program is the most efficient.__*

## Problem 
You are a farmer and would like to build an enclosure for your animals. You have a given amount of fence to build the enclosure with and must create the enclosure in the shape of either a circle or a square. Your program will prompt the user(the farmer) for the amount of fence he/she has in feet. Also, your program will prompt the user for whether they want to build a circular enclosure (denoted by the number 1) or a square enclosure (denoted by the number 2). Given this information, your program will print out the area of the enclosure. If the user makes in invalid enclosure choice (not 1 or 2), your program should simply print an error message.

## Input Specification
1. The length of the fence will be a positive integer.
2. The choice of enclosure will also be an integer. (The only valid choices are 1 and 2.)

## Output Specification
Output the area in square feet of the enclosure to two decimal places.


## Example Usage

```
Example 1:

How much fencing do you have (in feet)?: 100
Input (1) for a circular fence or (2) for a square fence: 1
The area of the circular enclosure is: 7853.97 square feet
```

```
Example 2:

How much fencing do you have (in feet)?: 100
Input (1) for a circular fence or (2) for a square fence: 2
The area of the square enclosure is: 625.00 square feet
```

```
Example 3 (Invalid Input):

How much fencing do you have (in feet)?: 100
Input (1) for a circular fence or (2) for a square fence: 3
Error: Sorry, that is an invalid shape.
```