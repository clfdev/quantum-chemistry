#include <stdio.h>

int main() {
    int matriz[2][2];
    int i, j;

    // Ler
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Imprimir
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
