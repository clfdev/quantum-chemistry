
#include <stdio.h>

int main() {
    int i;

    // FOR loop: print numbers 1 to 5
    printf("FOR loop:\n");
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // WHILE loop: print numbers 6 to 10
    printf("WHILE loop:\n");
    i = 6;
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // DO-WHILE loop: print numbers 11 to 15
    printf("DO-WHILE loop:\n");
    i = 11;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 15);
    printf("\n");

    return 0;
}
