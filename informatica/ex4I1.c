/*Data una matrice di valori scambiare gli elementi
 della diagonale principale con la diagonale secondaria.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 4

void riempirematrice(int mat[][DIM], int dim) {
    int i, j;
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            mat[i][j] = rand() % 9 + 1; // Valori da 1 a 9
        }
    }
}

void stampamatrice(int mat[][DIM], int dim) {
    int i, j;
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            printf("matrice[%d][%d] = %d ", i + 1, j + 1, mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m[DIM][DIM] , temp=0;
    srand(time(NULL));

    riempirematrice(m, DIM);
    stampamatrice(m, DIM);
    for (int i = 0; i < DIM; i++)
    {
        temp=m[i][i];
        m[i][i]=m[i][DIM-1-i];
        m[i][DIM-1-i]=temp;
    }
    printf("\n");
    stampamatrice(m , DIM);
    return 0;
}
