/*1  2  3  4
  12 13 14 5
  11 16 15 6
  10  9  8 7*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 5

void riempirematrice(int mat[][DIM]) {
    int num=1 , top=0 , bottom=DIM-1 , left=0 , right=DIM-1;
    int i;
    while (num<= DIM*DIM)
    {
        for (i = left; i <= right; i++) {
            mat[top][i]=num++;
        }
        top++;
        for (i = top; i <= bottom; i++) {
            mat[i][right] = num++; 
    }
        right--;
        for ( i = right; i >= left; i--)
        {
            mat[bottom][i] = num++;
        }
        bottom--;
        for ( i = bottom; i >= top; i--)
        {
            mat[i][left] = num++;
        }
        left++;
        
    
    
    }
}

void stampamatrice(int mat[][DIM]) {
    int i, j;
    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            printf("matrice[%d][%d] = %d \t", i + 1, j + 1, mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m[DIM][DIM] , temp=0;
    riempirematrice( m);
    
    stampamatrice( m);
   
    
    
    return 0;
}