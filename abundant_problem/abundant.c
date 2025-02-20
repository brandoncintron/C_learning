#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, count = 0;
  int *arr = NULL;

  // Open the numbers.txt file as read-only
  FILE *numbers = fopen("numbers.txt", "r");

  // If we can't open the file, display error
  if (numbers == NULL) {
    perror("Error opening file");
  }

  // Scan the file for the numbers
  while (fscanf(numbers, "%d", &n) == 1) {
    // Increase the count for each number in the file for number of test cases
    count++;

    // If there are more than 1000 numbers in the file, close the file
    if(count >= 1000){
        printf("Too many test cases. Closing program.\n");
        break;
    }

    // alloc enough memory for the array size
    arr = realloc(arr, count * sizeof(int));
    // Append the number from the file to the array, starting at arr[0]
    arr[count - 1] = n;
  }

  // Now, the array has the values from the file at their respective indices
  for (int i = 0; i < count; i++) { // Loop through each number in the file
    int sum = 0;

    // Increment by 1 until we reach the number
    for (int j = 1; j < arr[i]; j++) {
      // Divide the number from file by each incrementation to find proper divisors
      if (arr[i] % j == 0) {
        // Add the sum of the divisors
        sum += j;
      }
    }

    // If the sum of the divisors is greater than the number from file, output results
    if (sum > arr[i]) {
      printf("Test case #%d: %d is abundant.\n", i + 1, arr[i]);
    } else {
      printf("Test case #%d: %d is NOT abundant.\n", i + 1, arr[i]);
    }
  }

  fclose(numbers);
  free(arr);

  return 0;
}