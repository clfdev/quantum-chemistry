#include <stdio.h>
#include <stdlib.h>

// Function to display the successor
void showSuccessor(int number) {
    printf("\nThe successor of %d is %d", number, number + 1);
}

// Function to return the predecessor
int returnPredecessor(int number) {
    return number - 1;
}

// Function that displays the sum of two numbers
void showSum(int firstValue, int secondValue) {
    printf("\nThe sum of %d and %d is %d", firstValue, secondValue, firstValue + secondValue);
}

// Function that returns the sum of two numbers
int returnSum(int firstValue, int secondValue) {
    return firstValue + secondValue;
}

int main() {
    // Defining variables
    int a;

    // Instruction
    printf("Enter a value: ");

    // Assign value to 'a'
    scanf("%d", &a);

    // Call the function to show the successor
    showSuccessor(a);

    // Display the predecessor
    printf("\nThe predecessor of %d is %d", a, returnPredecessor(a));

    // Assigning values to demonstrate sum functions
    int b = 7;

    // Call the function to show the sum
    showSum(a, b);

    // Display the sum returned by the function
    printf("\nThe sum of %d and %d is %d", a, b, returnSum(a, b));

    // Return from function
    return 0;
}

