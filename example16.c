#include <stdio.h>
#include <stdlib.h>

// Function that returns the value increased by 10
int returnPlusTen(int number) {
    return number + 10;
}

// Function that increases the value by 10 using a pointer
void increaseByTen(int *number) {
    *number = *number + 10;
}

int main() {
    // Defining variables
    int a = 5;

    // Display the value
    printf("%d \n", a);

    // Increase by 10 using return
    a = returnPlusTen(a);

    // Display the value
    printf("%d \n", a);

    // Increase by 10 using pointer function
    increaseByTen(&a);

    // Display the value
    printf("%d \n", a);

    // Return from function
    return 0;
}

