#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    // To enable accented characters (locale settings)
    setlocale(LC_ALL,"");

    // Fill a 2x2 matrix with user input and
    // then swap the values between the first and second rows.
    int myMatrix[2][2], temp1, temp2, i, j;

    // Reading values into the matrix
    printf("Enter a value for [0][0]: ");
    scanf("%d", &myMatrix[0][0]);
    printf("Enter a value for [0][1]: ");
    scanf("%d", &myMatrix[0][1]);
    printf("Enter a value for [1][0]: ");
    scanf("%d", &myMatrix[1][0]);
    printf("Enter a value for [1][1]: ");
    scanf("%d", &myMatrix[1][1]);

    // Temporary variables
    temp1 = myMatrix[0][0];
    temp2 = myMatrix[0][1];

    // Swapping values using temporary variables
    myMatrix[0][0] = myMatrix[1][0];
    myMatrix[0][1] = myMatrix[1][1];
    myMatrix[1][0] = temp1;
    myMatrix[1][1] = temp2;

    // Printing updated matrix
    printf("\n%d %d", myMatrix[0][0], myMatrix[0][1]);
    printf("\n%d %d", myMatrix[1][0], myMatrix[1][1]);

    return 0;
}

