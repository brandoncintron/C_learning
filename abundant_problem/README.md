# Abundant Numbers - Practice Problem

*DISCLAIMER: This practice problem was referenced from a University of Central Florida professors' public practice resources. __I do not take any credit for creating this problem, nor can I guarantee my program is the most efficient.__*

## Problem 
Write  a  program  that  reads  in  a  list  of  numbers  from  a  file,  and  for  each  number, determines and prints out whether or not that number is abundant. 
 
Read your data from a file named, “numbers.txt”. The format for this file is specified in the section below titled, “Input Specification.”

## Input Specification
1. The first integer line of the file will be a positive integer, n (less than 1000), indicating the number of test cases in the file. 
2. The next n lines will contain a single positive integer each (less than 10000), with the number you are to determine is abundant or not for that test case.

## Output Specification
Output a line with one of the two the following formats for each test case: 

Test case #t: X is abundant.

Test case #t: X is NOT abundant. 


## Example Usage

```
Example 1 (Corresponding to Sample Input File):
Test case #1: 6 is NOT abundant. 
Test case #2: 12 is abundant. 
Test case #3: 17 is NOT abundant.
```

```
Example 2:
Test case #1: 12 is abundant.
Test case #2: 21 is NOT abundant.
Test case #3: 18 is abundant.
Test case #4: 17 is NOT abundant.
```