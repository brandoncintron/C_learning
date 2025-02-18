# Planes - Practice Problem

*DISCLAIMER: This practice problem was referenced from a University of Central Florida professors' public practice resources. __I do not take any credit for creating this problem, nor can I guarantee my program is the most efficient.__*

## Problem 
Planes need a certain radius of free space around them so that they are not in danger of crashing into another plane. For this problem, given the locations of two planes you have to decide whether or not the two planes are too close for safe flying. In particular, if two planes are less than a distance of 100 units apart, they are too close to be flying safely.

## Input Specification
1. The x,y locations of both planes will be real numbers in between -1000 and 1000 units, inclusive.

## Output Specification
Output one of the two follow statements depending upon whether or not the two planes are flying too close to each other:

The two planes are safe.
The two planes are too close to be safe.

## Example Usage
```
Example 1:
Enter the x and y coordinates of the first plane.
10 10
Enter the x and y coordinates of the second plane.
90 90
The two planes are safe.
```

```
Example 2:
Enter the x and y coordinates of the first plane.
-5 6
Enter the x and y coordinates of the second plane.
7 5
The two planes are too close to be safe.
```